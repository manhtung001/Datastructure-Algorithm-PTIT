#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		vector<ll> v;
		v.clear();
		for (int i = 9; i >= 0; i--)
		{
			while (a[i] <= n)
			{
				n -= a[i];
				v.push_back(a[i]);
			}
		}
		cout << v.size() << endl;
 }
}
