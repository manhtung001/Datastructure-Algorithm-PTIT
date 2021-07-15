#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k, a[1001];
		cin >> n >> k;
		for(int i = 1; i <= k; i++) cin >> a[i];
		ll i = k;
		while(i > 0 && a[i] == n-k+i) i--;
		if(i == 0){
			for(int i = 1; i <= k; i++) a[i] = i;
		}
		else{
			a[i] = a[i] + 1;
			for(int j = i+1; j <= k; j++){
				a[j] = a[j-1] + 1;
			}
		}
		for(int i = 1; i <= k; i++) cout << a[i] << " ";
		cout << endl;
	}
}

