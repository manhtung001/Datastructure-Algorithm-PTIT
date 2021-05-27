#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001], vs[1001], v, e, u;
void BFS(int u)
{
 queue<int> q;
 q.push(u);
 vs[u] = 1;
 cout << u << " ";
 while (!q.empty())
 {
		u = q.front();
		q.pop();
		vs[u] = 1;
		for (int i = 1; i <= v; i++)
		{
			if (vs[i] == 0 && matran[u][i] == 1)
			{
				cout << i << " ";
				vs[i] = 1;
				q.push(i);
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
		cin >> v >> e >> u;
		memset(matran, 0, sizeof(matran));
		for (int i = 1; i <= e; i++)
		{
			int a, b;
			cin >> a >> b;
			matran[a][b] = matran[b][a] = 1;
		}
		for (int i = 1; i <= v; i++)
			vs[i] = 0;
		BFS(u);
		cout << endl;
 }
}
