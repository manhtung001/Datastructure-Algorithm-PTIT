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
ll dao(ll n){
	ll a = 0;
	while(n > 0){
		a = a*10 + n%10;
		n /= 10; 
	}
	return a;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		ll m = dao(n);
		ll res = luythua(n,m);
		cout << res << endl;
	}
}
