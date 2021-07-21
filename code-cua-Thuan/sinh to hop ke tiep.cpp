#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000];
void init(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i>=1){
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}else{
		for(int i=1;i<=k;i++){
			a[i]=i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		sinh();
		in();
	}
}
