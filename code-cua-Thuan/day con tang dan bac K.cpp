#include<bits/stdc++.h>
#define max 101
using namespace std;
int a[max],n,k,x[max],res,chuaxet[max];
int check(){
	int tmp=0;
	for (int i=1;i<k;i++) if (a[x[i]]<a[x[i+1]]) tmp++;
	if (tmp==k-1) return 1;
	else return 0;
}
void Try(int i){
	for (int j=x[i-1]+1;j<=n;j++){
		if (chuaxet[j]){
			x[i]=j;
			chuaxet[j]=0;
			if (i==k&&check()) {
				res++;
			}
			else Try(i+1);
			chuaxet[j]=1;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>k;
	for (int i=1;i<=n;i++) {
		chuaxet[i]=1;
		cin>>a[i];}
	x[0]=0;
	Try(1);
	cout<<res<<endl;
}
