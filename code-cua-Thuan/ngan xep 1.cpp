#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; int n; 
	stack<int> stk;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			stk.push(n);
		}
		else if(s=="pop") stk.pop();
		else if(s=="show"){
			vector<int> a;
			if(stk.size() == 0){
				cout<<"empty\n";
				continue;
			}
			while(stk.size()>0){
				a.push_back(stk.top());
				stk.pop();
			}
			reverse(a.begin(),a.end());
			for(auto &i: a){
				cout<<i<<" ";
				stk.push(i);
			}
			cout<<endl;
		}
	}
}
