#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll dem = 0;
		while(n != 0){
			for(int i = 9; i >= 0; i--){
				while(n >= a[i]){
					n -= a[i];
					dem++;
				} 
			}
		}
		cout << dem << endl;
	}
}


