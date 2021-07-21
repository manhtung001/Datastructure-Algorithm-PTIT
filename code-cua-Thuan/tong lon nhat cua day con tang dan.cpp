#include <bits/stdc++.h>
using namespace std; 
using ll=long long;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n]; for(int i=0; i<n; i++) cin>>a[i];
		ll L[1000]; ll res=0;
		for(int i=0; i<n; i++){
			L[i]=a[i];
			for(int j=0; j<i; j++){
				if(a[j]<a[i]) L[i]=max(L[i],L[j]+a[i]);
			}
			res=max(res,L[i]);
		}
		cout<<res<<endl;
	
	}
}
