#include<bits/stdc++.h>
#define max 100
using namespace std;
int a[max],n,k;
void Try(int i){
	for (int j=a[i-1]+1;j<=n;j++){
		a[i]=j;
		if (i==k){
			for (int l=1;l<=k;l++){
				cout<<char(a[l]+64);
			}
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>n>>k;
		a[0]=0;
		Try(1);
	} 
}
