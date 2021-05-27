#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001], V, E, s, t, vs[1001], e[1001];
//vs: dinh, e: canh lien thong

void DFS(int u)
{
 vs[u] = 1;
 for (int i = 1; i <= V; i++)
 {
		if (vs[i] == 0 && matran[u][i] == 1)
		{
			e[i] = u;
			DFS(i);
		}
 }
}

void DuongDiDFS(int s, int t)
{
 for (int i = 1; i <= V; i++)
 {
		vs[i] = 0;
		e[i] = 0;
 }
 DFS(s);
 vector<int> res;
 if (vs[t] == 1)
 {
		//		int i = t;
		while (t > 0)
		{
			res.push_back(t);
			t = e[t];
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i] << " ";
		}
 }
 else
		cout << -1;
}

main()
{
 int T;
 cin >> T;
 while (T--)
 {
		cin >> V >> E >> s >> t;
		memset(matran, 0, sizeof(matran));
		for (int i = 1; i <= E; i++)
		{
			int a, b;
			cin >> a >> b;
			matran[a][b] = matran[b][a] = 1;
		}
		DuongDiDFS(s, t);
		cout << endl;
 }
}
