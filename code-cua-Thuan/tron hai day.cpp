#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n+m];
		for(int i=0; i<n ;i++) cin>>a[i];
		for(int i=n; i<m+n; i++) cin>>a[i];
		sort(a,a+n+m);
		for(auto &i: a) cout<<i<<" ";
		cout<<endl;
	}
}
