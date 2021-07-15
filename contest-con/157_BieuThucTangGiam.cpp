#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i = 0; i <= s.size(); i++){
			st.push(i+1);
			if(s[i] == 'I' || i == s.size()){
				while(!st.empty()){
					cout << st.top();
				    st.pop();
				}
			}
		}
		cout << endl;
	}
}

