#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll f[101];
		f[0] = 1; f[1] = 1; f[2] = 2; f[3] = 4;
		for(int i = 4; i <= 50; i++){
			f[i] = f[i-1] + f[i-2] + f[i-3]; // so tribonaci = tong 3 so truoc no
		}
		cout << f[n] << endl;
	}
}

