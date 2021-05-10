#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 123456789;
ll muCoSo2(ll n)
{ // ham 2^n
 if (n == 0)
		return 1;
 else if (n == 1)
		return 2;
 else
 {
		ll x = muCoSo2(n / 2);
		if (n % 2 == 0)
			return (x * x) % mod;
		else
			return (((x * x) % mod) * 2) % mod;
 }
}
//cach2: dung de quy return dem(n-1) + dem(n-1);
main()
{
 ll t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		ll res = muCoSo2(n - 1);
		cout << res << endl;
 }
}
/*
VD: n = 3 => (1 1 1), (1 2), (2 1), (3) => kq = 4 = 2^2
Tuong tu n = 4 => kq = 2^3; n = 5 => kq = 2^4
*/
