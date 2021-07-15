#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		ll dem = 0;
		for(int i = 1; i < n; i++){
			for(int j = i+1; j <= n; j++){
				if(a[i] > a[j]) dem++;
			}
		}
		cout << dem << endl;
	}
}

