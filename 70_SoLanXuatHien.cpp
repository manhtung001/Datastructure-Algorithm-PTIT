#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, x, a, dem = 0;
		cin >> n >> x;
		for (int i = 1; i <= n; i++)
		{
			cin >> a;
			if (a == x)
				dem++;
		}
		if (dem == 0)
			cout << -1;
		else
			cout << dem;
		cout << endl;
 }
}
