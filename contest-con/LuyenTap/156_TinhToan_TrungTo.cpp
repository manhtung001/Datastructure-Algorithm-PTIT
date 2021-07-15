#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ok(char x){
	if(x == '*' || x == '/') return 3;
	if(x == '+' || x == '-') return 2;
	return -1;
}
string TrungTo_HauTo(string s){
	stack<char> st;
	string s1 = "";
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(s[i]);
		else if(s[i] >= '0' && s[i] <= '9') s1 += s[i];
		else if(s[i] == ')'){
			while(!st.empty() && st.top() != '('){
				s1 += st.top();
				st.pop();
			}
			if(st.top() == '(') st.pop();
		}
		else{
			if(s1[s1.size()-1] >= '0' && s1[s1.size()-1] <= '9') s1 += '#';
			while(!st.empty() && ok(st.top()) >= ok(s[i])){
				s1 += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		if(st.top() != '(') s1 += st.top();
		st.pop();
	}
	return s1;
}
int TinhToan(string s){
	stack<ll> st;
	ll res = 0;
	for(int i = 0;i < s.size(); i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '*'|| s[i] == '/'){
			ll first = st.top(); st.pop();
			ll second = st.top(); st.pop();
			if(s[i] == '+') res = second + first;
			else if(s[i] == '-') res = second - first;
			else if(s[i] == '*') res = second * first;
			else if(s[i] == '/') res = second / first;
			st.push(res);
		}
		else{ 
		    ll tmp = 0;
			while(s[i] >= '0' && s[i] <= '9' && i < s.size()){
				tmp = tmp*10 + (s[i]-'0');
				i++;
			}
			if(s[i] != '#') i--;
			st.push(tmp);
		}
	}
	return st.top();
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s; cin >> s;
		string s1 = TrungTo_HauTo(s);
		cout << TinhToan(s1) << endl;
	}
}

