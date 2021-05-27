
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001], V, E, s, t, vs[1001], e[1001];
//vs: dinh, e: canh lien thong

void BFS(int u)
{
 queue<int> q;
 q.push(u);
 vs[u] = 1;
 //	cout << u << " ";
 while (!q.empty())
 {
		u = q.front();
		q.pop();
		for (int i = 1; i <= V; i++)
		{
			if (matran[u][i] == 1 && vs[i] == 0)
			{
				//				cout << i << " ";
				q.push(i);
				vs[i] = 1;
				e[i] = u;
			}
		}
 }
}

void DuongDiBFS(int s, int t)
{
 for (int i = 1; i <= V; i++)
 {
		vs[i] = 0;
		e[i] = 0;
 }
 BFS(s);
 vector<int> res;
 if (vs[t] == 1)
 {
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
		DuongDiBFS(s, t);
		cout << endl;
 }
}