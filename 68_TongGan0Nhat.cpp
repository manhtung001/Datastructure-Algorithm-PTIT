#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//bool compare(ll a, ll b){
//	return abs(a) < abs(b);
//}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		cin >> n;
		ll a[n + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		//sort(a, a+n, compare);
		ll min = a[0] + a[1];
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (abs(a[i] + a[j]) < abs(min))
				{
					min = a[i] + a[j];
				}
			}
		}
		cout << min << endl;
 }
}
