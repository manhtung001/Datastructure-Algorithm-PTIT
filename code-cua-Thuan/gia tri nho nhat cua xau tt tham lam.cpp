#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int k; cin>>k; string s;
    	cin>>s;
    	int d[300]={0};
    	for(int i=0; i<s.size(); i++){
    		d[s[i]]++;
		}
		priority_queue<int, vector<int> > q;
		for(int i=0; i<s.size(); i++){
			if(d[s[i]]>0){
				q.push(d[s[i]]);
				d[s[i]]=0;
			}
		}
		while(k>0 and q.size()>0){
			k-=1;
			int t=q.top(); q.pop();
			t--;
			q.push(t);
		}
		ll res=0; 
		while(q.size()>0){
			int a=q.top(); q.pop();
			res+=a*a;
		}
		cout<<res<<endl;
    }
    
    return 0;
}
