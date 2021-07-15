#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int n; cin >> n;
	ll a[n+1][n+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1) cout << j << " ";
		}
		cout << endl;
	}
}

