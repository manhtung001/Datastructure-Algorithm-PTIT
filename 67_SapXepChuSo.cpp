#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string s;
		int d[10] = {0};
		for(int i = 1; i <= n; i++){
			cin >> s;
			for(int j = 0; j < s.size(); j++){
				d[s[j]-'0']++;
			}
		}
		for(int i = 0; i < 10; i++){
			if(d[i] > 0) cout << i << " ";
		}
		cout << endl;
	}
}

