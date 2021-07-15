#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll s, d;
		cin >> s >> d;
		if(s > d*9){
			cout << -1;
			break;
		}
//		else{
			ll a[1001];
			s = s-1;
			for(int i = d; i > 1; i--){
				if(s > 9){
					a[i] = 9;
					s = s - 9;
				}
				else{
					a[i] = s;
					s = 0;
				}
			}
			a[1] = 1 + s;
			for(int i = 1; i <= d; i++) cout << a[i];
//		}
		cout << endl;
	}
}

