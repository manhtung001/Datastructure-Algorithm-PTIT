#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
 int n;
 cin >> n;
 cin.ignore();

 int a[51][51];
 for (int t = 1; t <= n; t++)
 {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			int u = 0;
			while (i < s.size() && s[i] != ' ')
			{
				u = u * 10 + (s[i] - '0'); //TH dinh >= 2 cs
				i++;
			}
			a[t][u] = 1;
		}
 }

 for (int i = 1; i <= n; i++)
 {
		for (int j = i; j <= n; j++)
		{
			if (a[i][j] == 1)
			{
				cout << i << " " << j << endl;
				a[i][j] = 0;
			}
		}
 }
}
