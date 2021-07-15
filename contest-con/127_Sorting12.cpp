#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		ll a[n+1], b[m+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int j = 0; j < m; j++) cin >> b[j];
		sort(a,a+n);
		sort(b,b+m);
		ll tich = a[n-1] * b[0];
		cout << tich << endl;
	}
}

