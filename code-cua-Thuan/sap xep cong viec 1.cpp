#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct ss{
	int start,finish;
};
ss s[1005];
bool compare(ss x, ss y){
	if(x.finish<y.finish) return true;
	return false;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--){
    	int n ;cin>>n;
    	for(int i=0; i<n ;i++) cin>>s[i].start; for(int i=0; i<n ;i++) cin>>s[i].finish;
    	sort(s,s+n,compare);
    	int cnt=1,i=0;
    	for(int j=1; j<n ;j++)
		{
    		if(s[j].start>=s[i].finish)
			{
    			cnt++;
    			i=j;
			}
		}
		cout<<cnt<<endl;
    }
    return 0;
}
