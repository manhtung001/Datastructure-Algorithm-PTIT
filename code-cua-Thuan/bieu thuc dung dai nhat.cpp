#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
		string s;
		cin>>s;
		stack <char> stk;
		int res=0;
		for (int i=0;i<s.size();i++){
			if (s[i]==')'&&stk.size()>0){
				if(stk.top()=='('){
					stk.pop();
					res+=2;
				} 
			}
			else stk.push(s[i]);
		}
		cout<<res<<endl;
	}	
}
