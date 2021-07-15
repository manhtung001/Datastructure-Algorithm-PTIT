#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;
string to_string(ll n){
	string s = "";
	while(n > 0){
		s += (n%10 + '0');
		n /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}
void lap3(ll n){
	v.clear();
	ll x = 1;
	while(x*x*x <= n){
		ll t = x*x*x;
		v.push_back(to_string(t));
		x++;
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		lap3(n); reverse(v.begin(), v.end());
		string stringN = to_string(n);
		bool check = false;
		for(int i = 0; i < v.size(); i++){
//			if(v[i].size() > stringN.size()) continue;
			string s = v[i];
			int dem = 0;
			for(int j = 0; j < stringN.size(); j++){
				if(stringN[j] == s[dem]) dem++;
			}
			if(dem == s.size()){
				check = true;
				cout << s;
				break;
			}
		}
		if(check == false) cout << -1;
		cout << endl; 
	}
}

