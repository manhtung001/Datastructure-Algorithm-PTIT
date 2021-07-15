#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		ll a[n+1];
		ll sum = 0, max = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
			sum += a[i];
			if(sum > max) max = sum;
			if(sum < 0) sum = 0;
		}
		cout << max << endl;
	}
}

