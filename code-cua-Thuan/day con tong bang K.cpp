#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[101], x[101], k, check;
vector<vector<ll> > res;
void nhap(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	res.clear(); 
}
void in(){
	ll sum = 0;
	for(int i = 1; i <= n; i++) sum += a[i] * x[i];
	if(sum == k){
		vector<ll> v;
		for(int i = 1; i <= n; i++){
			if(x[i] == 1) v.push_back(a[i]);
		}
		res.push_back(v);
	} 
}
void Try(int i){
	for(int j = 1; j >= 0; j--){
		x[i] = j;
//		ll sum = sum + a[i]*x[i];
		if(i == n) in();
		else Try(i+1);
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		Try(1);
        if(res.size() == 0) cout << -1;
        else{
		    sort(res.begin(), res.end());        	
        	for(int i = 0; i < res.size(); i++){
        		cout << "[";
        		for(int j = 0; j < res[i].size()-1; j++){
        			cout << res[i][j] << " ";
				}
				cout << res[i][res[i].size()-1]  << "] ";
			}
		}
		cout << endl;
	}
}
