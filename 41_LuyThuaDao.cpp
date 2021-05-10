#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll dao(ll n)
{
 ll x = 0;
 while (n > 0)
 {
		x = x * 10 + n % 10;
		n /= 10;
 }
 return x;
}
ll luythua(ll n, ll x)
{
 if (x == 0)
		return 1;
 else if (x == 1)
		return n;
 else
 {
		ll t = luythua(n, x / 2) % mod;
		if (x % 2 == 0)
			return (t * t) % mod;
		else
			return (((t * t) % mod) * n) % mod;
 }
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll x = dao(n);
		cout << luythua(n, x) << endl;
 }
}
