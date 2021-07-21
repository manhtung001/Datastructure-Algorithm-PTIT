#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, x; 
		cin >> n;
		ll a[n+1];
		vector<ll> v;
		for(int j = 1; j <= n; j++) cin >> a[j];
		for(int i = 1; i < n; i++){
			cin >> x;
			if(x != a[i]) v.push_back(i);
		}
		cout << v[0] << endl;
	}
}
