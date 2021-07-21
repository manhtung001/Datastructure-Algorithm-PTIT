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
void solve(long long n){
	long long f[n];
	f[0]=1;f[1]=1;f[2]=2;
	for(int i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
	cout<<f[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve(n);
		cout<<endl;
	}
}
