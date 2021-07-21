#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int n,s,m; cin>>n>>s>>m;
    	int songaymualuongthuc=s-s/7;
    	if(s*m>songaymualuongthuc*n) cout<<-1;
    	else
    	{
    		for(int i=1; i<=songaymualuongthuc; i++)
    			if(n*i>=s*m) {
    				cout<<i;
    				break;
				}
		}
		cout<<endl;
    }
    
    return 0;
}
