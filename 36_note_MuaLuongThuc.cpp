#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n, s, m;
		cin >> n >> s >> m;
		int kt = 0;				// neu kt = 1 thi bi chet doi
		int sum = 0;			// so luong thuc co trong ngay
		int dem = 0;			// dem so ngay can mua luong thuc
		int count = 0; // dem so ngay k can mua(de bo sung cho cn)
		if (m > n)
			cout << -1 << endl;
		else
		{
			` for (int i = 1; i <= s; i++)
			{
				if (i % 7 == 0)
				{ // i la chu nhat
					if (sum < m)
					{ // luong thuc k con du an
						if (count != 0)
						{
							count--;		// giam ngay k di mua
							sum += n; //di mua
							sum -= m; // an
							dem++;				// tang ngay di mua
						}
						else
						{ //k co ngay du tru de di mua cho CN
							kt = 1;
							break;
						}
					}
					else
						sum -= m;
				}
				else if (sum >= m)
				{ // van du an
					sum -= m;
					count++; // tang ngay k can mua
				}
				else
				{
					sum += n;
					sum -= m;
					dem++;
				}
			}

			if (kt == 1)
				cout << -1 << endl;
			else
				cout << dem << endl;
		}
 }
}
