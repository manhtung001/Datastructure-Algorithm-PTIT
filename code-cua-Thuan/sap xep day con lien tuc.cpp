#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n,x ; cin>>n ;
        int a[n+5],b[n+5];
        for (int i=0; i<n; i++) 
        {
            cin>>a[i];
            b[i]=a[i];
		}
        sort(b,b+n); int left=0,right=0;
        for (int i=0 ;i<n; i++){ 
            if(b[i]!=a[i]) {
                left=i; break;
            }
        }
        for (int i=n-1;i>=0; i--){ 
            if(b[i]!=a[i]) {
                right=i; break;
            }
        }
    	cout<<left+1<<" "<<right+1<<endl;
	}
    return 0;
}
