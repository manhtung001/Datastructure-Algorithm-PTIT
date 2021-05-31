#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
void tohop(ll n, ll k)
{ // tinh theo cthuc c(n,k) = n!/(n-r)!*r!
 if (k == 1)
		cout << n;
 else if (k == n)
		cout << 1;
 else
 {
		if (n - k < k)
			k = n - k; //C(n,k) = C(n,n-k)
		ll p = 1, r = 1;
		while (k)
		{
			p *= n, r *= k;
			ll m = __gcd(p, r);
			p /= m, r /= m;
			n--, k--;
		}
		cout << p % mod;
 }
}
ll f[1001][1001] = {0};
void ToHop()
{
 for (int i = 1; i <= 1001; i++)
 {
		f[0][i] = f[i][i] = 1;
 }
 for (int j = 1; j <= 1001; j++)
 {
		for (int i = 1; i < j; i++)
		{
			f[i][j] = (f[i - 1][j - 1] + f[i][j - 1]) % mod;
		}
 }
}
main()
{
 ToHop();
 int t;
 cin >> t;
 while (t--)
 {
		ll n, k;
		cin >> n >> k;
		cout << f[k][n] << endl;
 }
}
