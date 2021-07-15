#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101], n, k;
vector< vector<int> > res;
void Try(int i, ll sum, vector<int> v){
	if(sum > k) return;
	if(sum == k){
		res.push_back(v);
		return;
	} 
	for(int j = i; j <= n; j++){
		if(sum + a[j] <= k){
			v.push_back(a[j]);
			Try(j,sum+a[j],v);
			v.pop_back();
		}
		
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> v;
		res.clear();
		v.clear();
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);		
		if(a[1] > k) cout << -1;
		else{
			Try(1,0,v);
			sort(res.begin(), res.end());
		    for(int i = 0; i < res.size(); i++){
			    cout << "[";
			    for(int j = 0; j < res[i].size()-1; j++){
				    cout << res[i][j] << " ";
			    }
			    cout << res[i][res[i].size()-1] << "] ";
		    } 
		}
		cout << endl;
	}
}

