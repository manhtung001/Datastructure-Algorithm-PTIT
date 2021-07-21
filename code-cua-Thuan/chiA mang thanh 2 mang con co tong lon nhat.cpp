#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll a[n+1], sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		} 
		sort(a, a+n);
		ll sum1 = 0, sum2 = 0;
		if(k <= n-k){
			for(int i = 0; i < k; i++) sum1 += a[i];
		}
		else{
			for(int i = 0; i < n - k; i++) sum1 += a[i];
		}
		sum2 = sum - sum1;
		cout << sum2 - sum1 << endl;
	}
}
