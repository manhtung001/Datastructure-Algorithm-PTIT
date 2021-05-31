#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[101][101][101];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string x, y, z;
		int s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		cin >> x >> y >> z;
		memset(f, 0, sizeof(f));
		for (int i = 0; i < s1; i++)
		{
			for (int j = 0; j < s2; j++)
			{
				for (int k = 0; k < s3; k++)
				{
					if (x[i] == y[j] && y[j] == z[k])
						f[i + 1][j + 1][k + 1] = f[i][j][k] + 1;
					else
						f[i + 1][j + 1][k + 1] = max(f[i][j + 1][k + 1], max(f[i + 1][j][k + 1], f[i + 1][j + 1][k]));
				}
			}
		}
		cout << f[s1][s2][s3] << endl;
 }
}
