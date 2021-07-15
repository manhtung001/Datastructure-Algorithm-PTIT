#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		ll *a = new ll[n+1];
		ll vtr;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == x) vtr = i+1;
		}
		cout << vtr << endl;
	}
}

