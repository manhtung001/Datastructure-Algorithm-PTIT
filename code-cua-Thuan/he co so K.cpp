#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	string s="";
    	string res="";
    	string a,b; int k; cin>>k>>a>>b;
    	while(a.size()>b.size()) b="0"+b;
    	while(a.size()<b.size()) a="0"+a;
//    	cout<<a<<" "<<b;
    	int nho=0;
    	for(int i=a.size()-1; i>=0; i--){
    		int t=(a[i]-'0') + (b[i]-'0') + nho;
    		nho=0;
    		if(t>=k){
    			nho+=1;
    			t-=k;
    			string tmp=to_string(t);
				res=tmp+res;
			}
			else  {
				string tmp=to_string(t);
				res=tmp+res;
			}
		}
		if(nho>=1) res="1"+res;
		cout<<res<<endl;
    	
    }
    return 0;
}
