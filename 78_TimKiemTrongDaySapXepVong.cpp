#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, a, x, vtri;
		cin >> n >> x;
		for (int i = 1; i <= n; i++)
		{
			cin >> a;
			if (a == x)
			{
				vtri = i;
			}
		}
		cout << vtri << endl;
 }
}
