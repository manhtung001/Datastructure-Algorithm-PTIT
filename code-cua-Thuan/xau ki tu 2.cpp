#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int t;cin>>t;
    while(t--){
    	int d; cin>>d;
    	string s; cin>>s;
		int dp[500]={0},maxdem=0;
    	for(int i=0; i<s.size(); i++)
		{
    		dp[s[i]]++;
    		if(maxdem<dp[s[i]]) maxdem=dp[s[i]];
		}
		if((maxdem-1)*(d-1)<=s.size()-maxdem) cout<<1; 
		else cout<<-1;
		cout<<endl;
    }
    return 0;
}
