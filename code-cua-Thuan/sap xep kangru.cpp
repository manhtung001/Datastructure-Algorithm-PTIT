#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int n ;cin>>n ; vector <int> a(n);
    	for(int i=0; i<n ;i++) cin>>a[i];
    	sort(a.begin(),a.end());
    	int res=0;
    	for(int i=n/2-1, j=n-1; j>=n/2,i>=0;){
    		if(a[j]>= 2 * a[i]){
    			res++;
    			j--; i--;
			}
			else i--;
		}
		cout<<n-res<<endl;
    }
    return 0;
}
