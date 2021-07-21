#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll a[51];
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		ll sum1 = 0, sum2 = 0;
		for(int i = 1; i <= n; i++){
			if(i % 2 == 0) sum1 = sum1*10 + a[i];
			else sum2 = sum2*10 + a[i];
		}
		cout << sum1 + sum2 << endl;
	}
}
