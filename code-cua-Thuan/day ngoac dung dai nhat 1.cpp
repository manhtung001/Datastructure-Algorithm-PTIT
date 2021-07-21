#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int res=0;
		stack<int> at;
		at.push(-1);
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				at.push(i);
			}else{
				at.pop();
				if(at.size()>0){
					res=max(res,i-at.top());
				}
				if(at.size()==0){
					at.push(i);
				}
			}
		}
		cout<<res<<endl;
	}
}
