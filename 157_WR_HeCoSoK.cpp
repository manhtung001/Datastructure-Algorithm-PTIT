#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a, b;
int k;
string cong()
{
 while (a.size() < b.size())
		a = '0' + a;
 while (a.size() > b.size())
		b = '0' + b;
 int nho = 0;
 string res = "";
 for (int i = a.size() - 1; i >= 0; i--)
 {
		int t = (a[i] - '0') + (b[i] - '0') + nho;
		nho = t / k;
		t = t % k;
		res = (char)(t + '0') + res;
 }
 if (nho > 0)
		res = '1' + res;
 return res;
}
main()
{
 cin >> k >> a >> b;
 cout << cong();
}
