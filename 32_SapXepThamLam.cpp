#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool xuli(ll a[], ll n)
{
 ll b[1001];
 for (int i = 0; i < n; i++)
 { // copy(a,a+n,b)
		b[i] = a[i];
 }
 sort(b, b + n);
 for (int i = 0; i < n; i++)
 {
		if ((a[i] != b[i]) && (a[n - 1 - i] != b[i]))
		{
			return false;
		}
 }
 return true;
}
main()
{
 ll t, n, a[1001], b[1001];
 cin >> t;
 while (t--)
 {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if (xuli(a, n))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
 }
}
