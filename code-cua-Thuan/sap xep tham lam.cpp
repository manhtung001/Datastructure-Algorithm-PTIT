#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1], b[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a+1, a+n+1);
		bool check;
		for(int i = 1; i <= n; i++){
			if(b[i] != a[i] && b[i] != a[n-i+1]){
				check = false;
				break;
			}
			else check = true;
		}
		if(check) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
