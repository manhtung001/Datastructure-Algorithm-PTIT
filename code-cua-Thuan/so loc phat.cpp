#include<bits/stdc++.h>
using namespace std;
bool comp(string s1,string s2){
	if(s1>s2){
		return true;
	}
	return false;
}
void locphat(int n){
	priority_queue<string, vector<string>,greater<string>> res;
		vector<string> ans;
		queue<string> pq;
		pq.push("6");
		pq.push("8");
		while(pq.size()>0){
			string s=pq.front();
			pq.pop();
			ans.push_back(s);
			if(s.size()>n){
				break;
			}
			pq.push(s+"6");
			pq.push(s+"8");
		}
		int dem=0;
		for(auto &i: ans){
			if(i.size()==n){
				dem++;
			}
		}
		cout<<dem<<endl;
		for(auto &i: ans){
			if(i.size()==n){
				cout<<i<<" ";
			}
		}
		cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		locphat(n);
	}
}
