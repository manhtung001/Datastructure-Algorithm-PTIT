#include <bits/stdc++.h>
using namespace std;
int n, t;
int a[100000], b[100000], h=1;
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		b[h]= a[i];
		h++;
	}
}

void sinh(){
	int m=n;
	for(int i=1; i<=n; i++) {
		b[h]= a[i];
		h++;
	}
	while(n-- && n!=0){
		for(int i=1; i<=n; i++) a[i]= a[i] + a[i+1];
		for(int i=1; i<=n; i++) {
			b[h]= a[i];
			h++;
		}
	}
	int i=h-1, j=0;
	while(m>j){
		int t=i-j;
		for(int k=t; k<=i; k++){
			if(k==t) cout<<"["<<b[k];
			else cout<<" "<<b[k];
		}
		cout<<"]"<<" ";
		j++;
		i= i- j;
	}
}

main(){
	cin>>t;
	while(t--){
		start();
		sinh();
		cout<<endl;
	}
}
