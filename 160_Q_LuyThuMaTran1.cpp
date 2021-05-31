#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
int n;
vector<vector<ll> > F;
vector<vector<ll> > multiply(vector<vector<ll> > a, vector<vector<ll> > b){ 
	vector<vector<ll> > res;	
	for(int i=0; i<n; i++){
		vector<ll> v;
		for(int j=0; j<n; j++){
			ll tmp = 0;
			for(int t=0; t<n; t++){
				tmp = (tmp + (a[i][t]%mod * b[t][j]%mod))%mod;
			}
			v.push_back(tmp);
		}
		res.push_back(v);
	}
	return res;
}
vector<vector<ll> > power(int k){ 
	if(k == 1)   return F;
	vector<vector<ll> > t = power(k/2); 
	t=multiply(t, t);   
	if(k%2 != 0) t = multiply(t, F); 
	return t;
} 
main(){ 
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>n>>k;
		for(int i=0; i<n; i++){
			F.resize(n);
			for(int j=0; j<n; j++){
				F[i].resize(n);
				cin>>F[i][j];
			}
		}
		vector<vector<ll> > res = power(k);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
} 
