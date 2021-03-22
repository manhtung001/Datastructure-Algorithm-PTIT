#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;
typedef long long ll;
main()
{
 ll t;
 cin >> t;
 while (t--)
 {
		ll n;
		cin >> n;
		vector<ll> vt;
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			ll t;
			cin >> t;
			vt.push_back(t);
		}
		sort(vt.begin(), vt.end());
		for (int i = 0; i < n; i++)
		{
			sum += i * vt[i];
			sum = sum % MAX;
		}
		cout << sum << endl;
 }
}
