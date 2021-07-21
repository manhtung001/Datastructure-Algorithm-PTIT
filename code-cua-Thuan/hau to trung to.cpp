#include<bits/stdc++.h>
using namespace std;
bool solve(char x){
	return (x>='a'&&x<='z')||(x>='A'&&x<='Z');
}
string getin(string s){
	stack<string> s1;
	for(int i=0;s[i]!='\0';i++){
		if(solve(s[i])){
			string op(1,s[i]);
			s1.push(op);
		}else{
			string op1=s1.top();
			s1.pop();
			string op2=s1.top();
			s1.pop();
			s1.push("("+op2+s[i]+op1+")");
		}
	}
	return s1.top();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<getin(s)<<endl;
	}
}
long long ngto(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
