#include<bits/stdc++.h>
using namespace std;
void tien_to_trung_to(string s){
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'||s[i]=='%'){
			string begin=st.top();st.pop();
			string end=st.top();st.pop();
			string tam="("+begin+s[i]+end+")";
			st.push(tam);
		}else{
			st.push(string(1,s[i]));
		}
	}
	cout<<st.top()<<endl;
}
int main(){
	int t;
	cin>>t;
	ios_base::sync_with_stdio(false); cin.tie(0);
	while(t--){
		string s;
		cin>>s;
		tien_to_trung_to(s);
	}
}
