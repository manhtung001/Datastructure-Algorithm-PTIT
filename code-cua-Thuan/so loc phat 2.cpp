#include<bits/stdc++.h>

using namespace std;
bool cmp(string s,string s1){
	if(s>s1) return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		priority_queue<string, vector<string> , greater<string>> res;
		vector<string> ans;
		queue<string> pq;
		pq.push("6");
		pq.push("8");
		while(pq.size()>0){
			string s= pq.front(); 
			pq.pop();
			ans.push_back(s);
			if(s.size()>n) break;
			pq.push(s+ "6");
			pq.push(s +"8");
		}
//		reverse(ans.begin(),ans.end());
		cout<<ans.size()-1<<endl;
		for(auto &i: ans){
			if(i.size()<=n) cout<<i<<" ";
		}
		
		cout<<endl;
	}
}
