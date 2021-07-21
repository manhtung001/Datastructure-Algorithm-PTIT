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
long long f[1001][1001];
void caitui(long long n,long long m,int a[],int c[]){
	for(int i=0;i<=n;i++){
		f[i][0]=0;
	}
	for(int j=0;j<=m;j++){
		f[0][j]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j>=a[i-1]){
				f[i][j]=max(f[i-1][j],c[i-1]+f[i-1][j-a[i-1]]);
			}else{
				f[i][j]=f[i-1][j];
			}
		}
	}
	cout<<f[n][m]<<endl;
}
int main(){
	int T; cin >> T;
	while (T--){
		int n, m, *a, *c;
		cin >> n >> m;
		a=new int[n];
		c=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		caitui(n,m,a,c);
		delete a;
		delete c;
	}
}
