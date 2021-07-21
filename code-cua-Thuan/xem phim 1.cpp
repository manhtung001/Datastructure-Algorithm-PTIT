#include<bits/stdc++.h>
using namespace std;
long long a[1000][25001];
void xemphim(long long m,long long n,long long b[]){
	for(int i=0;i<=n;i++){
		a[i][0]=0;
	}
	for(int j=0;j<=m;j++){
		a[0][j]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>=b[i-1]){
				a[i][j]=max(a[i-1][j],b[i-1]+a[i-1][j-b[i-1]]);
			}else{
				a[i][j]=a[i-1][j];
			}
		}
	}
	cout<<a[n][m];
}
void sll(int a)
{
	for ( int i = 0; i<a; i++)
		i=2;
}
int main(){
	long long m,n,*b;
	cin>>m>>n;
	b= new long long[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	xemphim(m,n,b);
	cout<<endl;
}
