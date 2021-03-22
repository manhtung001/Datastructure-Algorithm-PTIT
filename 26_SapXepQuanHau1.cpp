#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, res;

bool h[11], c[11], nguoc[22], xuoi[22];

void reset()
{
 for (int i = 1; i <= n; i++)
 {
		c[i] = false;
		h[i] = false;
 }
 for (int i = 1; i <= 2 * n; i++)
 {
		xuoi[i] = false;
		nguoc[i] = false;
 }
 res = 0;
}

void Try(int i)
{
 for (int j = 1; j <= n; j++)
 {
		if (!h[j] && !c[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
		{
			h[j] = c[j] = xuoi[i - j + n] = nguoc[i + j - 1] = true;
			if (i == n)
				res++;
			else
				Try(i + 1);
			h[j] = c[j] = xuoi[i - j + n] = nguoc[i + j - 1] = false;
		}
 }
}

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		cin >> n;
		reset();
		Try(1);
		cout << res << endl;
 }
}
