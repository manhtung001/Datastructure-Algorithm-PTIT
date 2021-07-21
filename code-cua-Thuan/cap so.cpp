#include <bits/stdc++.h>
using namespace std; 
struct bit{
	int x; int y;
};
bool cmp(bit a, bit b){
	if(a.x<b.x) return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n; bit a[n*2]; int dp[n*2];
		for(int i=0; i<n; i++){
			cin>>a[i].x;
			cin>>a[i].y;
			dp[i]=1;
		}
		sort(a,a+n,cmp);
		for(int i=0; i<n ;i++)
			for(int j=0; j<i ;j++)
				if(a[i].x > a[j].y)  dp[i]=max(dp[i],dp[j]+1);
		cout<<dp[n-1]<<endl;
	}
}
