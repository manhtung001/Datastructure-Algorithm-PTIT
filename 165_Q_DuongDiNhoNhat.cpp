#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1001][1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, m, a;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				f[i][j] = 0;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> a;
				if (i == 1 && j == 1)
					f[i][j] = a;
				else if (i == 1)
					f[i][j] = f[i][j - 1] + a;
				else if (j == 1)
					f[i][j] = f[i - 1][j] + a;
				else
				{
					f[i][j] += min(f[i][j - 1], min(f[i - 1][j], f[i - 1][j - 1])) + a;
				}
			}
		}
		cout << f[n][m] << endl;
 }
}
