#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10001];
main(){
	int t;
	cin >> t;
	while(t--){
		ll a[101];
		int n; cin >> n;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
			f[a[i]] = 1;
		}
		if(sum % 2 != 0) cout << "NO";
		else{
			sum /= 2;
			f[1] = 0;
			for(int i = 1; i <= n; i++){
			    for(int j = sum; j >= a[i]; j--){
			    	if(f[j-a[i]]) f[j] = 1;
				}
			}
			if(f[sum]) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}
