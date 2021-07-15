#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll dem4 = 0, dem7 = 0;
		while(n > 0){
			if(n % 7 == 0){
				dem7++;
				n -= 7;
			}
			else if(n % 4 == 0){
				dem4++;
				n -= 4;
			}
			else{
				n -= 4;
				dem4++;
			}
		}
		if(n < 0) cout << -1;
		else{
			for(int i = 1; i <= dem4; i++) cout << 4;
			for(int i = 1; i <= dem7; i++) cout << 7;
		}
		cout << endl;
	}
}
