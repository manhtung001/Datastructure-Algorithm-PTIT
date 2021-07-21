#include<bits/stdc++.h>
using namespace std;
int n,chuaxet[7];
int a[7],b[7];
void xuat(){
		for (int i=1;i<=n;i++){
			cout<<char(a[i]+64);
		}
		for (int i=1;i<=n;i++)
			cout<<b[i];
		cout<<endl;
}
void Try1(int i){
	for (int j=1;j<=n;j++){
		b[i]=j;
		if (i==n) xuat();
		else Try1(i+1);
	}
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if (chuaxet[j]) {
			a[i]=j;
			chuaxet[j]=0;
		if (i==n) {
			Try1(1);
		}
		else Try(i+1);
		chuaxet[j]=1;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	memset(chuaxet,1,sizeof(chuaxet));
	Try(1);
}
