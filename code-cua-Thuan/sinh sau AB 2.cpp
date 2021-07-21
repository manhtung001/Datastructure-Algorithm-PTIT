#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
char a[1000];
void init(){
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinhxauab(){
	int i=n;
	while(i>=1&&a[i]=='B'){
		a[i]='A';
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]='B';
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
			sinhxauab();
		}
		cout<<endl;
	}
}
