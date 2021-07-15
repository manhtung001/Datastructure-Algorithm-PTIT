#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
	    ll dem = 0;
		for(int i = n-1; i >= 0; i--){
			cout << a[i] << " ";
			dem++;
			if(dem == k) break;
		}
		cout << endl;
	}
}

