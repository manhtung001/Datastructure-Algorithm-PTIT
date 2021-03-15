#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s, a;
int n;
bool chuaxet[100];

void nhap()
{
 cin >> s;
 n = s.length();
 for (int i = 0; i < n; i++)
 {
		chuaxet[i] = true;
 }
}

void in()
{
 for (int i = 0; i < n; i++)
 {
		cout << a[i];
 }
 cout << " ";
}

void Try(int i)
{

 for (int j = 0; j < n; j++)
 {
		if (chuaxet[j])
		{
			a[i] = s[j];
			chuaxet[j] = false;

			if (i == n - 1)
				in();
			else
				Try(i + 1);

			chuaxet[j] = true;
		}
 }
}

main()
{
 int t;
 cin >> t;
 while (t--)
 {
		nhap();
		Try(0);
		cout << endl;
 }
}
