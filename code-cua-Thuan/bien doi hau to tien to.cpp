#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		stack<string> stk;
		string s; cin>>s;
		string tmp="";
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]== '*' || s[i]== '/' || s[i]=='^') {
				string a=stk.top(); stk.pop();
				string b=stk.top(); stk.pop();
				string tmp=s[i] + b + a;
				stk.push(tmp);
				
			}
			else {
				
				stk.push(string(1,s[i]));
				
			}
		}
		cout<<stk.top();
		cout<<endl;
	}
}
