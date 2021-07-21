#include<bits/stdc++.h>
using namespace std;
long long solve(char c){
	if(c=='^'){
		return 3;
	}else if(c=='*'||c=='/'){
		return 2;
	}else if(c =='+'||c=='-'){
		return 1;
	}else {
		return -1;
	}
}
void bien_doi(string s){
	stack<char> st;
	string s1;
	for(int i=0;i<s.length();i++){
		char c = s[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			s1+=c;
		}else if(c=='('){
			st.push('(');
		}else if(c==')'){
			while(!st.empty()&&st.top()!='('){
				char tam=st.top();
				st.pop();
				s1+=tam;
			}
			st.pop();
		}
		else{
			while(!st.empty()&&solve(s[i])<=solve(st.top())){
				char tam=st.top();
				st.pop();
				s1+=tam;
			}
			st.push(c);
		}
	}
	while(!st.empty()){
		char tam=st.top();
		st.pop();
		s1+=tam;
	}
	cout<<s1<<endl;
}
long long abs(){
	if(2==1){
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bien_doi(s);
	}
}
