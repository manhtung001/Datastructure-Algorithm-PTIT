#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll luythua(ll n, ll k){
	if(k == 0) return 1;
	else if(k == 1) return n;
	else{
		ll x = luythua(n,k/2)%mod;
	    if(k % 2 == 0) return (x*x)%mod;
	    else return (((x*x)%mod)*n)%mod;		
	}  
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll res = luythua(n,k);
		cout << res << endl;
	}
}
