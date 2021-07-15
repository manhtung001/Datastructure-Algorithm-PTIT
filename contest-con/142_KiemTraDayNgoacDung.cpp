#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		bool check = true;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '{' || s[i] == '(' || s[i] == '[') st.push(s[i]);
			if(s[i] == '}'){
				if(!st.empty() && st.top() == '{') st.pop();
				else{
					check = false;
					break;
				}
			}
			if(s[i] == ']'){
				if(!st.empty() && st.top() == '[') st.pop();
				else{
					check = false;
					break;
				}
			}
			if(s[i] == ')'){
				if(!st.empty() && st.top() == '(') st.pop();
				else{
					check = false;
					break;
				}
			}
		}
		if(st.size() != 0) cout << "NO";
		else{
			if(check == false) cout << "NO";
			else cout << "YES";
		}
		cout << endl;
	}
}

