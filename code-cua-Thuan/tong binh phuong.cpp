#include <bits/stdc++.h>
using namespace std; 
using ll=long long;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int L[n]; 
		for(int i=0; i<=n; i++)  L[i]=i;
		for(int i=0; i<=n ;i++)
			for(int j=1; j<=sqrt(i); j++)
				L[i]= min(L[i], L[i-j*j] +1);
		cout<<L[n]<<endl;
	}
}
