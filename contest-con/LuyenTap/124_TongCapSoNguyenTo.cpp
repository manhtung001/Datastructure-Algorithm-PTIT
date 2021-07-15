#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		bool check[n+1];
		for(int i = 1; i <= n; i++) check[i] = true;
		for(int i = 2; i <= sqrt(n); i++){
			if(check[i]){
				for(int j = i*i; j <= n; j = j+i) check[j] = false;
			}
		}
		int kt = 0;
		for(int i = 2; i <= n; i++){
			if(check[i] && check[n-i]){
				cout << i << " " << n-i;
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << -1;
		cout << endl;
	}
}

