#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001], v, e, vs[1001], u;
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
		for (int i = 1; i <= v; i++)
		{
			if (matran[u][i] == 1 && vs[i] == 0)
			{
				cout << i << " ";
				q.push(i);
				vs[i] = 1;
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
			matran[a][b] = 1;
		}
		for (int i = 1; i <= v; i++)
			vs[i] = 0;
		BFS(u);
		cout << endl;
 }
}
