#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e,chuaxet[max];
vector<int> ke[max];
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=0;
	while (!q.empty()){
		int s=q.front();
		q.pop();
		for (int i=0;i<ke[s].size();i++){
			if (chuaxet[ke[s][i]]){
				q.push(ke[s][i]);
				chuaxet[ke[s][i]] = 0;
			}
		}
	}
}
void xuat(){
	for (int i=1;i<=v;i++) chuaxet[i]=1;
	for (int i=1;i<=v;i++){
		chuaxet[i]=0;
		if (i==1) BFS(2);
		else BFS(1);
		for (int j=1;j<=v;j++)
			if (chuaxet[j]) {
				cout<<i<<" ";break;
			}
	for (int i=1;i<=v;i++) chuaxet[i]=1;
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e;
		for (int i=1;i<=v;i++){
			ke[i].clear();
		}
		while (e--){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		xuat();
	}
}
