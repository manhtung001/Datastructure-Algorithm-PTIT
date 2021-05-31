#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[101], f[101][25001];
main()
{
 ll n, c;
 cin >> c >> n;
 for (int i = 1; i <= n; i++)
		cin >> a[i];
 memset(f, 0, sizeof(f));
 for (int j = 0; j <= c; j++)
		f[0][j] = 0;
 for (int i = 1; i <= n; i++)
 {
		for (int j = 0; j <= c; j++)
		{
			if (j >= a[i])
				f[i][j] = max(f[i - 1][j - a[i]] + a[i], f[i - 1][j]);
			else
				f[i][j] = f[i - 1][j];
		}
 }
 cout << f[n][c] << endl;
}
