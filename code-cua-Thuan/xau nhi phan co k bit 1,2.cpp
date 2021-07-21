#include<bits/stdc++.h>
using namespace std;
long long a[1001],n,k,dem;
void in(){
	for(int i=1;i<=n;i++){
		cout<< a[i];
	}
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		dem=dem+j;
		a[i]=j;
		if(i==n){
			if(dem==k){
				in();
			}
		}else{
			Try(i+1);
		}
		dem=dem-j;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
}
