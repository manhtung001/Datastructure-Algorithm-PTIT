#include<bits/stdc++.h>
#define max 100
using namespace std;
int c[max],a[max],chuaxet[max],n,w,x[max],xopt[max],fopt=INT_MIN,f=0,tmp=0;
void capnhat(){
	for (int i=1;i<=n;i++) xopt[i]=x[i];
	fopt=f;
}
void duyet(int i){
	for (int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			for (int l=1;l<=n;l++) {
				tmp+=x[l]*a[l];
				f+=x[l]*c[l];			
			}
			if (tmp<=w&&f>fopt) capnhat();
			f=0;
			tmp=0;
		} 
		else {
			duyet(i+1);
			}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>w;
	for (int i=1;i<=n;i++) cin>>c[i];
	for (int i=1;i<=n;i++) cin>>a[i];
	duyet(1);
	cout<<fopt<<endl;
	for (int i=1;i<=n;i++) cout<<xopt[i]<<" ";
	cout<<endl;
}
