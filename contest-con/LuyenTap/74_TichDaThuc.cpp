#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		ll p[m+1], q[n+1], tich[m+n+2];
		for(int i = 0; i < m; i++) cin >> p[i];
		for(int j = 0; j < n; j++) cin >> q[j];
		memset(tich,0,sizeof(tich));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				tich[i+j] += p[i] * q[j];
			}
		}
		for(int i = 0; i < m+n-1; i++){
			cout << tich[i] << " ";
		}
		cout << endl;
	}
}

