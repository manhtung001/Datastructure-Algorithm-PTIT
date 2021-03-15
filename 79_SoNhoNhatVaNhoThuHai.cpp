#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
		long n;
		cin >> n;
		long a = INT_MAX, b = INT_MAX;
		for (int i = 1; i <= n; i++)
		{
			long k;
			cin >> k;
			if (k < a)
			{
				if (a < b)
				{
					b = a;
				}
				a = k;
			}
			if (k < b && a != k)
			{
				b = k;
			}
		}
		if (b == INT_MAX || a == b)
		{
			cout << -1;
		}
		else
		{
			cout << a << " " << b;
		}
		cout << endl;
 }
}