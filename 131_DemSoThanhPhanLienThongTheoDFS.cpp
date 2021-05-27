#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[1001], e[1001], V, E;
vector<int> ke[1001];
void DFS(int u)
{
 vs[u] = 1;
 for (int i = 0; i < ke[u].size(); i++)
 {
		if (vs[ke[u][i]] == 0)
		{
			// vs[ke[u][i]] = 1;
			//			e[ke[u][i]] = u;
			DFS(ke[u][i]);
		}
 }
}
int Tplt()
{
 for (int i = 0; i < 1001; i++)
		vs[i] = 0;
 int k = 0;
 for (int i = 1; i <= V; i++)
 {
		if (vs[i] == 0)
		{
			k++;
			DFS(i);
		}
 }
 return k;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		cin >> V >> E;
		memset(ke, 0, sizeof(ke));
		for (int i = 1; i <= E; i++)
		{
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int res = Tplt();
		cout << res << endl;
 }
}
