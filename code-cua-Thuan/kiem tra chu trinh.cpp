#include<bits/stdc++.h>
#define max 1001
using namespace std;
int v,e;
int at[max][max],chuaxet[max];
void DFS(int u){
	chuaxet[u]=0;
	for (int i=1;i<=v;i++)
		if (at[u][i]&&chuaxet[i]) DFS(i);
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while (t--){
		cin>>v>>e;
		int x[e+2][3];
		for (int i=1;i<=e;i++){
			int a,b;cin>>a>>b;
			x[i][1]=a,x[i][2]=b;
		}
		int ok=0;
		for (int i=1;i<=v;i++)
			for (int j=1;j<=v;j++) at[i][j]=0;
		for (int i=1;i<=e;i++){
			memset(chuaxet,1,sizeof(chuaxet));
			int d=x[i][1],c=x[i][2];
			DFS(d);
			if (chuaxet[c]==0){
				ok=1;
				break;
			}
			else if (chuaxet[c]){
				at[d][c]=1;
				at[c][d]=1;
			}
		}
		if (ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
