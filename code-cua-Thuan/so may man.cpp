#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    	string res1;
    	int n;
    	cin>>n;
    	int ans4=0,ans7=0;
    	for(int i=0; i<n; i++){
    		if((n-4*i)%7==0){
    			ans4=i;
    			ans7=(n - 4*i)/7;
    			break;
			}
		}
		for(int i=0; i<ans7; i++) res1+="7";
		for(int i=0; i<ans4; i++) res1="4"+res1;
		if(ans7<0 || ans4<0) cout<<-1;
		else cout<<res1;
		cout<<endl;
	
    }
    return 0;
}
