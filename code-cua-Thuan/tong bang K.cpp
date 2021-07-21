#include <bits/stdc++.h>
using namespace std; 
using ll=long long;
long p=1e9+7;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k; int a[n+5];
		ll dp[k+5]={0};
		dp[0]=1;
		for(int i=1; i<=n ;i++) cin>>a[i];
		for(int i=1; i<=k; i++)
			for(int j=1; j<=n; j++)
			{
				if(i>=a[j])
					dp[i]=(dp[i] + dp[i-a[j]]) %p;
			}
		cout<<dp[k]<<endl;
	}
}
