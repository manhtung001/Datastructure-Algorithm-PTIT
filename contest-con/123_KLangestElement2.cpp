#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n; ll x;
		cin >> n >> x;
		int a[n+1];
		ll dem = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x) dem++;
		}
		if(dem == 0) cout << -1;
		else cout << dem;
		cout << endl;
	}
}

