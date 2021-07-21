#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		stack<int> stk;
		string s; cin>>s;
		string tmp="";
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]== '*' || s[i]== '/' || s[i]=='^') {
				long long res;
				int b=stk.top(); stk.pop();//a vao truoc, ra sau
				int a=stk.top(); stk.pop();
				if(s[i]=='+') res=a+b; else if(s[i]=='-') res=a-b; else if(s[i]=='*') res=a*b; else if(s[i]=='/') res=a/b; else if(s[i]=='^') res= pow(a,b);
				stk.push(res);
				
			}
			else {
				
				stk.push(long(s[i]-'0'));
				
			}
		}
		cout<<stk.top();
		cout<<endl;
	}
}
