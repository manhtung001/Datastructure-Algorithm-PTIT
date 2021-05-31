#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll m, n, k;
		cin >> m >> n >> k;
		ll *a = new ll[m+1];
		ll *b = new ll[n+1];
		vector<ll> v;
		for(int i = 0; i < m; i++){
			cin >> a[i];
			v.push_back(a[i]);
		} 
		for(int i = 0; i < n; i++){
			cin >> b[i];
			v.push_back(b[i]);
		} 
		sort(v.begin(), v.end());
	    cout << v[k-1] << endl;
	}
}
/* Cach2: for(int i = 0; i < m+n; i++) cin >> a[i];
          sort(a, a+m+n);
          cout <<  a[k-1];
*/
