#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n,k,mark[1005],sum[1005],x[1005];
vector<string> res;
void nhap(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
}
void xuat(){
	if(sum[n]==k){
		string ans="";
		for(int i=1; i<=n; i++){
			ans+=(x[i]+'0');
			ans+=' ';
		}
		res.push_back(ans);
	}
}
void backtrack(int i){
	for(int j=1; j<=n; j++){
		if(mark[j]==0){
			mark[j]=1;
			x[i]=j;
			sum[i]=sum[i-1]+a[i][j];
			if(i==n)  xuat();
			else backtrack(i+1);
			mark[j]=0;
		}
	}
}
void xuli(){
	backtrack(1);
	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<endl;
	}
}
main(){
	nhap();
	xuli();
}
