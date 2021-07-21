#include<bits/stdc++.h>
using namespace std;
void xaunhonhat(int k,string s){
	long long d[256]={0};
	for(int i=0;i<s.size();i++){
		d[s[i]]++;}
		priority_queue<long long> pq;
		for(int i=0;i<256;i++){
			if(d[i]>0){
				pq.push(d[i]);
			}
		}
		while(!pq.empty()&&k>0){
			int x=pq.top();
			pq.pop();
			x--;
			k--;
			pq.push(x);
		}
		long long res=0;
		while(!pq.empty()){
			res+=pq.top()*pq.top();
			pq.pop();
		}
		cout<<res<<endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		xaunhonhat(k,s);
	}
}
