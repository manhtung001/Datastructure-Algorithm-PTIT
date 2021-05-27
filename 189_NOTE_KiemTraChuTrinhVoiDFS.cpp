#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ke[1001];
int V, E, vs[1001], e[1001], check;

int DFS(int u, int p)
{ //p la dinh truoc u
 vs[u] = 1;
 for (int i = 0; i < ke[u].size(); i++)
 {
		if (vs[ke[u][i]] == 0)
		{
			if (DFS(ke[u][i], u))
				return 1;
		}
		else
		{
			if (ke[u][i] != p)
				return 1;
		}
 }
 return 0;
}

int chutrinh()
{
 for (int i = 0; i < 1001; i++)
		vs[i] = 0;
 for (int i = 1; i <= V; i++)
 {
		if (vs[i] == 0)
		{
			if (DFS(i, -1))
				return 1;
		}
 }
 return 0;
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
		int res = chutrinh();
		if (res == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
 }
}
