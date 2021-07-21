#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long p=1e9+7;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
	while(t--){
		    	priority_queue <ll, vector<ll>, greater<ll>> myqu;
    	long n; cin>>n;
    	long x;
    	for(long i=0; i<n; i++){
    		cin>>x;
    		myqu.push(x);
		}
		ll res=0;
		while(myqu.size()>1){
			long x=myqu.top(); myqu.pop();
			long y=myqu.top(); myqu.pop();
			long tmp=(x+y)%p;
			myqu.push(tmp);
			res+=tmp; res%=p;
		}
		cout<<res<<endl;
	}
    return 0;
}
