#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int V, E, vs[1001], e[1001];
vector<int> ke[1001];

void BFS(int u)
{
 queue<int> q;
 q.push(u);
 while (!q.empty())
 {
		u = q.front();
		q.pop();
		vs[u] = 1;
		for (int i = 0; i < ke[u].size(); i++)
		{
			if (vs[ke[u][i]] == 0)
			{
				vs[ke[u][i]] = 1;
				q.push(ke[u][i]);
			}
		}
 }
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

		memset(vs, 0, sizeof(vs));
		int k = 0;
		for (int i = 1; i <= V; i++)
		{
			if (vs[i] == 0)
			{
				k++;
				BFS(i);
			}
		}

		for (int i = 1; i <= V; i++)
		{
			memset(vs, 0, sizeof(vs));
			vs[i] = 1;
			int l = 0;
			for (int j = 1; j <= V; j++)
			{
				if (vs[j] == 0)
				{
					l++;
					BFS(j);
				}
			}
			if (l > k)
				cout << i << " ";
		}
		cout << endl;
 }
}
