#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		stack<char> st;
		string s;
		getline(cin,s);
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ' '){
				while(!st.empty()){
					char top = st.top();  st.pop();
					cout << top;
				}
				cout << " ";
			}
			else st.push(s[i]);
		}
		while(!st.empty()){
				char top = st.top();  st.pop();
				cout << top;
		}
		cout << endl;
	}
}

