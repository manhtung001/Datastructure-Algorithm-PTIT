#include<bits/stdc++.h>
using namespace std;
int n,a[1000];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinhketiep(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i>=1){
		int k=n;
		while(a[i]>a[k]){
			k--;
		}
		swap(a[i],a[k]);
		int l=i+1;
		int r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}else{
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		sinhketiep();
		in();
	}
}
