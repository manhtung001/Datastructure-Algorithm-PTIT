#include<iostream>

using namespace std;
//1 1 0 -> 1 0 1   100 -> 011
void sx(string s, int n){
	int d=0;
	for(int i=0;i<n; i++){
		if(s[i]=='0') d++;
	}
	if(d==n) {
		for(int i=0; i<n; i++) cout<<"1";
		return;
	}
	if(s[n-1]=='1') s[n-1]='0';
	else
	if(s[n-1]=='0'){
		s[n-1]='1';
		for(int i=n-2; i>=0; i--){
			if(s[i]=='1') {
				s[i]='0';
				break;
			}
			else s[i]='1';
		}
	}
	cout << s;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int n=s.size();
		sx(s,n);cout<<endl;
	}
	return 0;
}
