#include<bits/stdc++.h>
using namespace std;
long long n, a[1000],b[1000];
void ingray1(){
	for(int i=n;i>=1;i--){
		b[i]=(a[i-1] xor a[i]);
	}
	b[1]=a[1];
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			ingray1();
		}else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
