#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		vector<ll> v;
		ll n, m, k;
		cin >> m >> n >> k;
		ll a[m+1], b[n+1], c[m+n+2];
		for(int i = 0; i < m; i++){
			cin >> a[i];
			v.push_back(a[i]);
		} 
		for(int i = 0; i < n; i++){
			cin >> b[i];
			v.push_back(b[i]);
		} 
		sort(v.begin(), v.end());
		cout << v[k-1] << endl;*/
/*		memset(c,0,sizeof(c));
		ll i = 0, j = 0, x = 0;
		while(i < m && j < n){
			if(a[i] == b[j]){
				c[x] = a[i];
				c[x+1] = a[i];
				x += 2; i++; j++;
			}
			else if(a[i] < b[j]){
				c[x] = a[i]; x++; i++;
			}
			else{
				c[x] = b[j]; x++; j++;
			}
		}
		while(i < m) c[x] = a[i]; x++; i++;
		while(j < n) c[x] = b[j]; x++; j++;
		for(int y = 0; y < m+n-1; y++) cout << c[y] << " ";
//		cout << c[k-1] << endl;*/
        
        
        
	}
}

