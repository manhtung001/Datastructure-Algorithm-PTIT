#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[1001], e[1001], n, m;
vector<int> ke[1001];

void DFS(int u)
{
 vs[u] = 1;
 for (int i = 0; i < ke[u].size(); i++)
 {
		if (vs[ke[u][i]] == 0)
		{
			vs[ke[u][i]] = 1;
			// e[ke[u][i]] = u;
			DFS(ke[u][i]);
		}
 }
}

void DuongDi(int x, int y)
{
 for (int i = 0; i < 1001; i++)
 {
		vs[i] = 0;
		// e[i] = 0;
 }
 DFS(x);
 if (vs[y] == 1)
		cout << "YES";
 else
		cout << "NO";
}

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		cin >> n >> m;
		memset(ke, 0, sizeof(ke));
		for (int i = 1; i <= m; i++)
		{
			int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int q;
		cin >> q;
		while (q--)
		{
			int x, y;
			cin >> x >> y;
			DuongDi(x, y);
			cout << endl;
		}
 }
}
