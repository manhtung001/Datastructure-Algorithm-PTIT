#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll f[1001][1001];
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, k;
		cin >> n >> k;
		memset(f, 0, sizeof(f));
		for (int i = 0; i <= n; i++)
		{ // n
			for (int j = 0; j <= i; j++)
			{ // k
				if (j == 0)
					f[i][j] = 1;
				else
					f[i][j] = (((f[i - 1][j - 1] * j) % mod) + (f[i - 1][j] % mod)) % mod;
			}
		}
		cout << f[n][k] << endl;
 }
}
/*Cach2:
         sum = n;
         for(i = n-1; i >= n-k+1; i--)
             sum = ((sum%mod)*i)%mod;
*/
