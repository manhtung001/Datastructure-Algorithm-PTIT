#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		stack<int> stk;
		int l=s.size();
		int d=0;
		for(int i=0; i<l ; i++){
			
			if(s[i]=='('){
				d++;
				stk.push(d);
				cout<<stk.top()<<" ";		
				}
			else 
			if(s[i]==')'){
				cout<<stk.top()<<" ";
				stk.pop();
		
			}
		}
		cout<<endl;
	}
	
}
