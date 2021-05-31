#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n+1], f[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		memset(f,0,sizeof(f));
		f[1] = 1;
		//tim day con tang dai nhat
		for(int i = 1; i <= n; i++){
			f[i] = 1;
			for(int j = 1; j < i; j++){
				if(a[j] <= a[i]) f[i] = max(f[i], f[j]+1);
			}
		}
		sort(f+1,f+n+1);
		//so buoc phai doi it nhat chinh bang so phan tu con lai(sau khi tim dc day con dai nhat)
		cout << n - f[n] << endl;
	}
}

