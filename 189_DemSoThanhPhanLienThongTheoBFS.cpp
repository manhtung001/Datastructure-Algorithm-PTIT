#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[1001], e[1001], V, E;
vector<int> ke[1001];

void BFS(int u)
{
 vs[u] = 1;
 queue<int> q;
 q.push(u);
 while (!q.empty())
 {
		int v = q.front();
		q.pop();
		vs[v] = 1;
		for (int i = 0; i < ke[v].size(); i++)
		{
			if (vs[ke[v][i]] == 0)
			{
				vs[ke[v][i]] = 1;
				q.push(ke[v][i]);
			}
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
			BFS(i);
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
