#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		stack<char> st;
		bool check;
		for(int i = 0; i < s.size(); i++){
			check = false;
			if(s[i] == ')'){
				char top = st.top();
				st.pop();
				while(top != '('){
					if(top == '+' || top == '-' || top == '*' || top == '/')
					     check = true;
				    top = st.top(); st.pop();
				}
				if(check == false) break;
			}
			else st.push(s[i]);
		}
		if(check == true) cout << "No";
		else cout << "Yes";
		cout << endl;
	}
}

