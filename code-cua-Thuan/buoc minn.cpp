#include<bits/stdc++.h>
using namespace std;

void buocminn(int a[],int n){
	int f[n];
	int maxx=0;
	for(int i=0;i<n;i++){
		f[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if((a[i]>=a[j])&&f[i]<f[j]+1){
				f[i]=f[j]+1;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(maxx<f[i]){
			maxx=f[i];
		}
	}
	int k;
	k=n-maxx;
	cout<<k<<endl;
}
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
int main(){
	int t;
	cin>>t;
	while(t--){
		int *a,n;
		cin>>n;
		a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		buocminn(a,n);
		delete a;
	}
}
