#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[1001];
		cin >> n;
		ll sum = 0; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		cout << n - sum << endl;
	}
}

