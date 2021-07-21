#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<string> stk;
		for(int i=s.size()-1; i>=0; i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]== '/' ||s[i] =='^' || s[i] =='%')
				{
					string begin=stk.top(); stk.pop();
					string end = stk.top(); stk.pop();
					string tmp= "(" + begin + s[i] + end + ")";
					stk.push(tmp);
				}
			else stk.push(string(1,s[i]));
		}
		cout<<stk.top()<<endl; 
	}
}
