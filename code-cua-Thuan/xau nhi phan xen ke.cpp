#include <bits/stdc++.h>
using namespace std;
int main(){
	//1010 0101
	int n; cin>>n;
	string s1="0",s2="1";
	int i=0;
	while(s1.size()!=n and s2.size()!=n){
		if(s1[i]=='0') s1+='1';
		else s1+='0';
		if(s2[i]=='0') s2+='1'; else s2+='0';
		i++;
	}
	for(int i=0; i<s1.size(); i++){
		cout<<s1[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<s2.size(); i++){
		cout<<s2[i]<<" ";
	}
	
}
