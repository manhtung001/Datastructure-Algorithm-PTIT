#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, a[1001];
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		ll i = n-1;
		while(i > 0 && a[i] > a[i+1]) i--;
		if(i == 0){
			for(int i = 1; i <= n; i++) a[i] = i;
		}
		else{
			ll k = n;
			while(a[i] > a[k]) k--;
			swap(a[k], a[i]);
			ll l = i+1, r = n;
			while(l <= r){
				swap(a[l], a[r]);
				l++; r--;
			}
		}
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

