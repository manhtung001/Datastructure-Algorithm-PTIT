#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct ss{
	int id,start,finish;
};
ss s[1005];
bool compare(ss x, ss y){
	if(x.finish>y.finish) return true;
	return false;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int n ;cin>>n;
    	for(int i=0; i<n ;i++) {
    		cin>>s[i].id>>s[i].start>>s[i].finish;
		}
		int cnt=0,res=0,F[1005]={0};
    	sort(s,s+n,compare);
    	for(int i=0; i<n; i++){
    		while(F[s[i].start] and s[i].start>0) s[i].start-=1;
    		if(!F[s[i].start] and s[i].start>0){
    			F[s[i].start]=1;
    			res+=s[i].finish;
    			cnt++;
			}
		}
		cout<<cnt<<" "<<res<<endl;
    }
    return 0;
}
