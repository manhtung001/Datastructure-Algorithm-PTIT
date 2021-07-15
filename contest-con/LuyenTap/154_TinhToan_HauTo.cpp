#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int xuli(string s){
	stack<ll> st;
	ll res;
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9') st.push(s[i]-'0');
		else{
			ll first = st.top(); st.pop();
			ll second = st.top(); st.pop();
			if(s[i] == '+') res = second + first;
			else if(s[i] == '-') res = second - first;
			else if(s[i] == '*') res = second * first;
			else if(s[i] == '/') res = second / first;
			st.push(res);
		}
	}
	return res;
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << xuli(s) << endl;
	}
}

