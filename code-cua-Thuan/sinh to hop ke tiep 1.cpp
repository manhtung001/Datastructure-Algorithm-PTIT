#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok=1;
void sinh(){
	int i=k;
	while(i>0&&a[i]>n-k+i){
		i--;
	}if(i==0){
		ok=0;
	}else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
			cout<<a[j]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		
		sinh();
	}
}
