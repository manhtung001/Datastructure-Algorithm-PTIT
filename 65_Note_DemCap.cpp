#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[100001];
//x^y > y^x <-> y > x. Tuy nhien van co TH ngoai le(nhu duoi day)
ll xuli(ll x, ll b[], ll m)
{
 if (x == 0)
		return 0; // 0^y < y^0
 if (x == 1)
		return d[0];																									// x=1 && y=0 thi x^y > y^x
 ll id = upper_bound(b, b + m, x) - b; //vi tri dau tien > x
 ll res = m - id;																						//so phan tu y > x
 res += d[0] + d[1];																			// x^y > y^x vs moi y=0;1
 if (x == 2)
		res -= (d[3] + d[4]); //y>x nhung x^y < y^x
 if (x == 3)
		res += d[2]; // y<x nhung x^y > y^x
 return res;
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, m;
		cin >> n >> m;
		ll *a = new ll[n + 1];
		ll *b = new ll[m + 1];
		memset(d, 0, sizeof(d));
		for (int i = 0; i < n; i++)
			cin >> a[i]; //mang x
		for (int i = 0; i < m; i++)
		{ // mang y
			cin >> b[i];
			if (b[i] <= 4)
				d[b[i]]++;
		}
		sort(b, b + m);
		ll res = 0;
		for (int i = 0; i < n; i++)
		{
			res += xuli(a[i], b, m);
		}
		cout << res << endl;
 }
}
