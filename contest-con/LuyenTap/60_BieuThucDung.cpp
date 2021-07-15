#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<ll> v;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '[') v.push_back(i);
		}
		ll dem = 0, d = 0, p = 0;
		for(int j = 0; j < s.size(); j++){
			if(s[j] == '['){
				d++;
				p++;
			}
			else d--;
			if(d < 0){
				dem += v[p] - j;
				swap(s[v[p]], s[j]);
				p++;
				d = 1;
			}
		}
		cout << dem << endl;
	}
}

