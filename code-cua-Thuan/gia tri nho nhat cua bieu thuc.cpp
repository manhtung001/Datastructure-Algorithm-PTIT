#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	ll a[n],b[n];
    	for(int i=0 ;i<n ;i++) cin>>a[i]; for(int i=0; i<n ;i++) cin>>b[i];
    	sort(a,a+n); sort(b,b+n,greater<int>());
    	ll t=0;
    	for(int i=0; i<n ;i++){
    		t+=a[i]*b[i];
		}
		cout<<t<<endl;
    }
    return 0;
}
