#include<bits/stdc++.h>
using namespace std;
int a[17],n;
int check(){
	for (int i=1;i<n;i++){
		if (a[i]==a[i+1]&&a[i]==1) return 0;
	}
	if (a[n]==0&&a[1]==1) return 1;
	return 0;
}
void Try(int i){
	for (int j=0;j<=1;j++){
		a[i]=j;
		if (i==n) {
			if (check()) {
				for (int l=1;l<=n;l++){
					if (a[l]==0) cout<<'A';
					else cout<<'H';
				}
				cout<<endl;
			}
			
		}else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>n;
		Try(1);
	} 
}
