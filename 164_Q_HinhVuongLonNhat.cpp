#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[501][501], b[501][501];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, m;
		cin >> n >> m;
		ll res = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++)
			b[i][0] = a[i][0];
		for (int j = 0; j < m; j++)
			b[0][j] = a[0][j];

		for (int i = 1; i < n; i++)
		{
			for (int j = 1; j < m; j++)
			{
				if (a[i][j] == 1)
				{
					b[i][j] = min(b[i][j - 1], min(b[i - 1][j], b[i - 1][j - 1])) + 1;
					res = max(res, b[i][j]);
				}
				else
					b[i][j] = 0;
			}
		}
		cout << res << endl;
 }
}
