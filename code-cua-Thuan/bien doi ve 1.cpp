#include <bits/stdc++.h>
using namespace std;
int res=0;
int cnt(int n,int *memo){ //10
	if(n==1) return 0;
	if(memo[n] != -1) 
		return memo[n];
	int res=cnt(n-1,memo);
	if(n%2==0) res=min(res,cnt(n/2,memo));
	if(n%3==0) res=min(res,cnt(n/3,memo));
	memo[n]=1+res;
	return memo[n];
}
int get(int n){
	int memo[n+1];
	for(int i=0; i<=n; i++){
		memo[i]=-1;
		
	}
	return cnt(n,memo);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<get(n)<<endl;
	}
}
