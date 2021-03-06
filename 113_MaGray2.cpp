#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int g[1001];
		g[0] = s[0] - '0';
		for(int i = 1; i < s.size(); i++) g[i] = (s[i-1]-'0') xor (s[i]-'0');
		for(int i = 0; i < s.size(); i++) cout << g[i];
		cout << endl;
	}
}

