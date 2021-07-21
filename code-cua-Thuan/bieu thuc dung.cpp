#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	string s; cin>>s;
    	stack<char> stk; int dlt=0,res=0;
    	for(int i=0; i<s.size(); i++){//[]][[[]]
    		if(stk.size()==0){
    			stk.push(s[i]);
			}
			else if(stk.top()=='[' and s[i]==']'){
	
				stk.pop();
				dlt+=2;
			}
			else if(stk.top()==']' and s[i]=='[') { // 
				res+= stk.size() + dlt;
				stk.pop();
			}
			else if(s[i]=='['){
				stk.push(s[i]);
			}
			else if(stk.top()==']' and s[i]==']'){
				stk.push(s[i]);
			}
			if(stk.size()==0) dlt=0;
		}
		cout<<res<<endl;
    }
    return 0;
}
