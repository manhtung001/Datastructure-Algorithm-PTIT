#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001], vs[1001], v, e, u;
void DFS(int u)
{
 cout << u << " ";
 vs[u] = 1;
 for (int i = 1; i <= v; i++)
 {
		if (vs[i] == 0 && matran[u][i] == 1)
		{
			DFS(i);
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
		DFS(u);
		cout << endl;
 }
}
