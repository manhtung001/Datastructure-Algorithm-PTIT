#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int V, E;
vector<int> vao[1001];
vector<int> ra[1001];
int bac()
{
 for (int i = 1; i <= V; i++)
 {
		if (vao[i].size() != ra[i].size())
			return 0;
 }
 return 1;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		cin >> V >> E;
		memset(vao, 0, sizeof(vao));
		memset(ra, 0, sizeof(ra));
		for (int i = 1; i <= E; i++)
		{
			int u, v;
			cin >> u >> v;
			vao[v].push_back(u);
			ra[u].push_back(v);
		}
		int res = bac();
		cout << res << endl;
 }
}
