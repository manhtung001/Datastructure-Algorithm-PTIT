#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int s,d; cin>>s>>d;
    	stack <int> sta;
    	while(s>0)
    	{
    		d--;
    		if(s>9){
    			sta.push(9);
    			s-=9;
			}
    		else 
    		{
    			sta.push(s);
    			break;
			}
		
		}
		if(d<0) cout<<-1;
		else 
		{
			if(d>0)
			{
				int so= sta.top(); sta.pop();
				sta.push(so-1);
				while(d>1){
					sta.push(0);
					d--;
				}
				sta.push(1);
			}
			while(sta.size()!=0){
				cout<< sta.top();
				sta.pop();
			}
		}
		cout<<endl;
    }
    return 0;
}
