#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll a[101][101], f[101][101] = {};
		int m, n;
		cin >> m >> n;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i <= m; i++) f[i][1] = 1;
		for(int j = 0; j <= n; j++) f[1][j] = 1;
//		f[1][1] = 1;
		for(int i = 2; i <= m; i++){
			for(int j = 2; j <= n; j++){
				f[i][j] = f[i-1][j] + f[i][j-1];
			}
		}
		cout << f[m][n] << endl;
	}
}
