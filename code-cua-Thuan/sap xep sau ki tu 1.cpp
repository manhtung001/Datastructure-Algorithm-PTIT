#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		ll dem[26] = {};
		string s;
		cin >> s;
		ll n = s.size();
		ll max = 0;
		for(int i = 0; i < n; i++){
			dem[s[i]-'a']++;
			if(dem[s[i]-'a'] > max) max = dem[s[i]-'a'];
		}
		if(n-max >= max-1) cout << 1;
		else cout << -1;
		cout << endl;
	}
}
