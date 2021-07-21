#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5]; 
		int d=0,d1=0,d2=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==0) d++; 
			else if(a[i]==1) d1++;
			else d2++;
		}
		for(int i=0; i<d;i++) cout<<0<<" ";
		for(int i=0; i<d1;i++) cout<<1<<" ";
		for(int i=0; i<d2;i++) cout<<2<<" ";
		cout<<endl;
	}
}
