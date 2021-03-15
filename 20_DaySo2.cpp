
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void in(ll a[], ll n)
{
 cout << "[";
 for (int i = 1; i <= n; i++)
 {
		cout << a[i];
		if (i < n)
			cout << " ";
 }
 cout << "]"
						<< " ";
}
void xuli(ll a[], ll n)
{
 ll b[101], x;
 if (n < 1)
		return;
 else
 {
		for (int i = 1; i <= n - 1; i++)
		{
			x = a[i] + a[i + 1];
			b[i] = x;
		}
		xuli(b, n - 1);
		in(a, n); // de sau xu ly thi in nguoc tu duoi len
 }
}
main()
{
 ll t, n, a[101];
 cin >> t;
 while (t--)
 {
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		xuli(a, n);
		cout << endl;
 }
}
