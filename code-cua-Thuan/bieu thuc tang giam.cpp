#include<bits/stdc++.h>
using namespace std;
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
void bieuthuctanggiam(string s){
	string s1;
	stack<int> st;
	for(int i=0;i<=s.length();i++){
		st.push(i+1);
		if(i==s.length()||s[i]=='I'){
			while(!st.empty()){
			s1+=to_string(st.top());
			s1+="";
			st.pop();
		}
		}
	}
	cout<<s1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bieuthuctanggiam(s);
	}
}
