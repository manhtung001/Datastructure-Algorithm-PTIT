#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int f[101];
		f[1] = x;
		for (int i = 2; i <= n; i++)
		{
			//lenh copy nen day duoc gap doi
			if (i % 2 == 0)
				f[i] = min(f[i - 1] + x, f[i / 2] + z);
			else
				f[i] = min(f[i - 1] + x, f[(i + 1) / 2] + y + z); //day co do dai le thi co lenh delete
		}
		cout << f[n] << endl;
 }
}
