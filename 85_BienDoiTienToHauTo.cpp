#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void TienTo_HauTo(string s){
	stack<string> st;
	string res = "";
	for(int i = s.size()-1; i >= 0; i--){
		if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z'))
			st.push(string(1,s[i]));
		else{
			string first = st.top(); st.pop();
			string second = st.top(); st.pop();
			res = first + second + s[i];
			st.push(res);
		}
	}
	cout << st.top();
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s; cin >> s;
		TienTo_HauTo(s);
		cout << endl;
	}
}

