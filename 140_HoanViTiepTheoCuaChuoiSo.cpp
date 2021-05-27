#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t;
	cin >> t;
	for(int m = 1; m <= t; m++){
		string s;
		int test;
		cin >> test;
		cin >> s;
		cout << m << " ";
		ll i = s.size() - 2;
		while(i >= 0 && s[i]-'0' >= s[i+1]-'0') i--;
		if(i < 0) cout << "BIGGEST";
		else{
			ll k = s.size() - 1;
			while(s[i]-'0' >= s[k]-'0') k--;
			swap(s[i], s[k]);
			ll l = i+1, r = s.size()-1;
			while(l <= r){
				swap(s[l],s[r]);
				l++; r--;
			}
			cout << s;
		}
		cout << endl;
	}
}

