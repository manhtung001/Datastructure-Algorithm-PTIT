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
		int dem1 = 0, dem2 = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ')' && !st.empty()){
				if(st.top() == '(') st.pop();
				else st.push(s[i]);
			}
			else st.push(s[i]);
		}
		while(!st.empty()){
			if(st.top() == '(') dem1++;
			else dem2++;
			st.pop();
		}
		cout << dem1/2 + dem1%2 + dem2/2 + dem2%2 << endl;
	}
}

