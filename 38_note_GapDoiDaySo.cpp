#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		long long k;
		cin >> n >> k;
		long long mid = pow(2, n) / 2;
		while (1)
		{
			if (n == 1)
			{
				cout << 1;
				break;
			}
			if (mid == k)
			{
				cout << n;
				break;
			}
			if (k > mid)
			{
				k = mid - (k - mid); // lay doi xung
			}
			n--;
			mid /= 2;
		}
		cout << endl;
 }
}