#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll *a = new ll[n+1];
		ll sum = 0;
		for(int i = 0; i < n-1; i++){
			cin >> a[i];
			sum += a[i];
		}
		ll s = (n+1)*n/2;
		cout << s - sum << endl;
	}
}

