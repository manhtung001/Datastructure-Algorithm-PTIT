#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int matran[1001][1001];
main()
{
 memset(matran, 0, sizeof(matran));
 int n;
 cin >> n;
 cin.ignore();
 for (int t = 1; t <= n; t++)
 {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			int u = 0;
			while (i < s.size() && s[i] != ' ')
			{
				u = u * 10 + (s[i] - '0');
				i++;
			}
			matran[t][u] = 1;
			matran[u][t] = 1;
		}
 }
 for (int i = 1; i <= n; i++)
 {
		for (int j = 1; j <= n; j++)
		{
			cout << matran[i][j] << " ";
		}
		cout << endl;
 }
}
