#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll x[1001];
bool OK;
void nhap()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		x[i] = i;
}
void in()
{
	for (int i = 1; i <= n; i++)
	{
		cout << x[i];
	}
	cout << " ";
}
void Next_Permutation()
{
	ll i = n - 1;
	while (i > 0 && x[i] > x[i + 1])
		i--;
	if (i > 0)
	{
		ll k = n;
		while (x[i] > x[k])
			k--;
		swap(x[i], x[k]);
		ll l = i + 1, r = n;
		while (l <= r)
		{
			swap(x[l], x[r]);
			l++, r--;
		}
	}
	else
		OK = false;
}
main()
{
	int t;
	cin >> t;
	while (t--)
	{
		nhap();
		OK = true;
		while (OK)
		{
			in();
			Next_Permutation();
		}
		cout << endl;
	}
}
