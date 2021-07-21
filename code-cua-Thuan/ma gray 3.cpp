#include <iostream>
using namespace std;
int n,a[100];
string s;
char sosanh(char a, char b){
	if(a==b) return '0';
	else return '1';
}
void sinh(){
	int len=s.length();
	string res;
	res+=s[0];
	for (int i=1; i<len; i++){
		res+=sosanh(s[i],s[i-1]);
	}
	cout<<res<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		sinh();
	}
}
