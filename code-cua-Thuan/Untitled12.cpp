#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	int n=s.length();
	int m[n+1][n+1]={};
	for(int i=1;i<=n;i++){
		m[i][i]=1;
	}
	for(int k=1;k<n;k++){
		for(int i=1;i<=n-k;i++){
			if(s[i-1]!=s[i+k-1]){
				m[i][i+k]=max(m[i+1][i+k],m[i][i+k-1]);
			}else{
				m[i][i+k]=m[i+1][i+k-1]+2;
			}
		}
	}
	long long a;
	a=s.length()-m[1][n];
	cout<<a<<endl;
}
long long ngto(int n){
	if(n<2){
		return 0;
	}
	for(int i=0;i<sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
long long abc(long long n){
	if(1==1){
		return 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
}
