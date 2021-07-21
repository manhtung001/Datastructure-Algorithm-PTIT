#include <bits/stdc++.h>
using ll=long long;

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n,m,p;
    	vector<int> v1,v2,v3;
    	cin>>n>>m>>p;
    	ll a[n],b[m],c[p];
    	for (int i=0; i<n;i++){
    		cin>>a[i];
    		v1.push_back(a[i]);
		}
		for (int i=0 ;i<m;i++){
			cin>>b[i];
			v2.push_back(b[i]);
		}
		for (int i=0 ;i<p;i++){
			cin>>c[i];
			v3.push_back(c[i]);
		}
//	    sort(begin(v1), end(v1));
//	    sort(begin(v2), end(v2));
//	    sort(begin(v3),end(v3));
	    vector<ll> v1_intersect_v2;
	    set_intersection(begin(v1), end(v1), begin(v2), end(v2),back_inserter(v1_intersect_v2));
	    vector<ll> res;
	    set_intersection(begin(v1_intersect_v2),end(v1_intersect_v2), begin(v3),end(v3),back_inserter(res));
//	    for (auto i : v1_intersect_v2) cout << i << ' '; cout << '\n';
		if(res.size()==0) cout<<"-1" ;
		else 
	    for (auto i: res) cout<<i<<" ";
	    cout<<endl;
	}
}
