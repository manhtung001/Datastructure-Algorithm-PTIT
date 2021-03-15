
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int C(int k, int n)
{
 if (k == 0 || k == n)
		return 1;
 else if (k == 1)
		return n;
 else
 {
		return (C(k - 1, n - 1) + C(k, n - 1));
 }
}
main()
{
 int t, m, n, a[101][101];
 cin >> t;
 while (t--)
 {
		cin >> m >> n;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << C(n - 1, m + n - 2) << endl;
 }
}
