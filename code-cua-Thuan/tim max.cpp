#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		ll sum = 0;
		for(int i = 0; i < n; i++){
			sum += a[i] * i;
		} 
		cout << sum % mod << endl;
	}
}
