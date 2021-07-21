#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    ll ts,ms;
    while(t--){
    	cin>>ts>>ms;
    	ll res;
    	while(1){
    		if(ms%ts==0){
    			cout<<"1/"<<ms/ts<<"\n";
    			break;
			}
			else
			{
				res=ms/ts +1;
				cout<<"1/"<<res<<" + ";
				ts= ts*res - ms;
				ms= ms*res;
			}
		}
    }
    return 0;
}
