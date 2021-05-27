#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ke[1001];
int V, E, vs[1001], e[1001], check;

void DFS(int u)
{
 vs[u] = 1;
 for (int i = 0; i < ke[u].size(); i++)
 {
		if (vs[ke[u][i]] == 0)
		{
			vs[ke[u][i]] = 1;
			DFS(ke[u][i]);
		}
 }
}

int LienThong()
{
 for (int i = 0; i < 1001; i++)
		vs[i] = 0;
 DFS(1);
 int dem = 0;
 for (int i = 1; i <= V; i++)
 {
		if (vs[i] == 1)
			dem++;
 }
 if (dem == V)
		return 1;
 else
		return 0;
}

int bac()
{
 int deg[1001], chan = 0, le = 0;
 for (int i = 1; i <= V; i++)
 {
		deg[i] = ke[i].size();
		if (deg[i] % 2 == 0)
			chan++;
		else
			le++;
 }
 if (chan == V || le == 0)
		return 2;
 else if (le > 0 && le <= 2)
		return 1;
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
		if (LienThong() == 1 && bac() == 2)
			cout << "2";
		else if (LienThong() == 1 && bac() == 1)
			cout << "1";
		else
			cout << "0";
		cout << endl;
 }
}
