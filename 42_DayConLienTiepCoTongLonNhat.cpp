#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		ll n, a[101];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll sum = 0, max = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			if (sum < 0)
				sum = 0;
			if (max < sum)
				max = sum;
		}
		cout << max << endl;
 }
}
