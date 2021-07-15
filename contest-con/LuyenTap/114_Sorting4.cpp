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
		ll i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				cout << a[i++] << " ";
				j++;
			}
			else if(a[i] < b[j]) cout << a[i++] << " ";
			else cout << b[j++] << " ";
		}
		while(i < n) cout << a[i++] << " ";
		while(j < m) cout << b[j++] << " ";
		cout << endl;
		i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				cout << a[i++] << " ";
				j++;
			}
			else if(a[i] < b[j]) i++;
			else j++;
		}
		cout << endl;
	}
}

