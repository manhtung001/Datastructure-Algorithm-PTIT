#include<bits/stdc++.h>
using namespace std;
int n,a[1000],ok=1;
void init(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
    }else{
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
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
