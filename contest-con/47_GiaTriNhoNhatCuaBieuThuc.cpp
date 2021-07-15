#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll compare(ll a, ll b){
	return b > a;
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n; 
		cin >> n;
		ll *a = new ll [n+1];
		ll *b = new ll [n+1];
		for(ll i = 0; i < n; i++) cin >> a[i];
		for(ll i = 0; i < n; i++) cin >> b[i];
		sort(a,a+n);
		sort(b,b+n);
		ll sum = 0;
		for(ll i = 0; i < n; i++){
			sum += a[i] * b[n-1-i];
		}
		cout << sum << endl;
	}
}

