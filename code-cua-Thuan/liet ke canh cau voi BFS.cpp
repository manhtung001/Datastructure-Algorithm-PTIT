#include <bits/stdc++.h> 
#define max 1001
using namespace std;
int v,e,chuaxet[max],a[max][max];
vector<int> ke[1001];
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=0;
	while (!q.empty()){
		int s=q.front();
		q.pop();
		for (int i=0;i<ke[s].size();i++){
			if (chuaxet[ke[s][i]]==1&&a[s][ke[s][i]]==1){
				q.push(ke[s][i]);
				chuaxet[ke[s][i]] = 0;
			}
		}
	}
}
void Set(){
	for (int i=1;i<=v;i++) chuaxet[i]=1;
}
void xuat(){
	Set();
	for (int i=1;i<=v;i++){
		for (int j=0;j<ke[i].size();j++){
			if (a[i][ke[i][j]]==1 && ke[i][j]>i){
				a[i][ke[i][j]]=0;
				a[ke[i][j]][i]=0;
				BFS(1);
				for (int l=1;l<=v;l++)
					if (chuaxet[l]){
						cout<<i<<" "<<ke[i][j]<<" ";
						break;
					}
				a[i][ke[i][j]]=1;
				a[ke[i][j]][i]=1;
				Set();
			}
		}
		
	}

}
int main(){
	int t;cin>>t;
	while (t--){
		cin>>v>>e;
		for (int i=1;i<=v;i++){
			ke[i].clear();
		}
		while (e--){
			int x,y;cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			a[x][y]=1;
			a[y][x]=1;
		}
		xuat(); cout << endl;
	}
}
