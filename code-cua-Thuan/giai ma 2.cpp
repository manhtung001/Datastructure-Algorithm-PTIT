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
void giaima(char *c){
	int n=strlen(c);
	int f[n+1];
	f[0]=1;
	f[1]=1;
	if(c[0]=='0'){
		cout<<0<<endl;
		return;
	}
	for(int i=2;i<=n;i++){
		f[i]=0;
		if(c[i-1]>'0'){
			f[i]=f[i-1];
		}
		if(c[i-2]=='1'||c[i-2]=='2'&&c[i-1]<'7'){
			f[i]+=f[i-2];
		}
	}
	cout<<f[n]<<endl;
}
long long abc(int a)
{
	if(a<2){
		return 1;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char c[45];
		cin>>c;
		giaima(c);
	}
}
