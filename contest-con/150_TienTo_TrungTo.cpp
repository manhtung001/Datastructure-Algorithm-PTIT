#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string TienTo_HauTo(string s){
	stack<string> st;
	string res = "";
	for(int i = s.size()-1; i >= 0; i--){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			st.push(string(1,s[i]));
		}
		else{
			string first = st.top(); st.pop();
			string second = st.top(); st.pop();
	        res = "(" + first + s[i] + second + ")";
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
		cout << TienTo_HauTo(s) << endl;
	}
}

