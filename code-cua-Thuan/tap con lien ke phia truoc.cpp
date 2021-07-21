#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		int n,k;
		cin>>n>>k;
		int a[k+1],ok=0;
		for (int i=1;i<=k;i++) {
			cin>>a[i];
			if (a[i]==i) ok++;
		}
		if (ok==k) {
			for (int i=1;i<=k;i++) cout<<n-k+i<<" ";
			cout<<endl;
		}
		else{
		int j=k-1;
		while (a[j+1]==a[j]+1) j--;
				a[j+1]--;
				for (int l=j+2;l<=k;l++) {
					a[l]=n-k+l;
				}
		for (int i=1;i<=k;i++) cout<<a[i]<<" ";
		cout<<endl;
		}
	} 
}
