#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1001][1001], a[1001], c[1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, v;
		cin >> n >> v;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> c[i];
		}
		memset(f, 0, sizeof(f));
		for (ll i = 0; i <= v; i++)
			f[0][i] = 0;
		for (ll i = 1; i <= n; i++)
		{
			for (ll j = 0; j <= v; j++)
			{
				if (a[i] <= j)
				{
					f[i][j] = max(c[i] + f[i - 1][j - a[i]], f[i - 1][j]);
				}
				else
					f[i][j] = f[i - 1][j];
			}
		}
		cout << f[n][v] << endl;
 }
}
