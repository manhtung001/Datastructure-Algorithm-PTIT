#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n,m; cin>>n>>m; vector <int> a(n),b(m);
        int d[100001]={0};
        for (int i=0; i<n ;i++){
            cin>>a[i];
            d[a[i]]++;
        }
        for (int i=0; i<m ;i++){
            cin>>b[i]; 
            d[b[i]]++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> giao;
        for (int i=0; i<100000; i++){
            if(d[i]>0) cout<<i<<" ";
        } 
        cout<<endl;
        set_intersection(begin(a),end(a),begin(b),end(b),back_inserter(giao));
        for (int i=0; i<giao.size(); i++) cout<<giao[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}
