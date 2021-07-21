#include<bits/stdc++.h>
using namespace std;
void biendoixau(string s1,string s2){
	int n=s1.length();
	int m=s2.length();
	int a[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				a[i][j]=i+j;
			}else if(s1[i-1]==s2[j-1]){
				a[i][j]=a[i-1][j-1];
			}else{
				int b=min(a[i-1][j],a[i][j-1]);
				a[i][j]=min(a[i-1][j-1],b)+1;
			}
		}
	}
	cout<<a[n][m]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		biendoixau(s1,s2);
	}
}
