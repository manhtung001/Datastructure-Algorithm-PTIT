#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[101][101], n;
vector<string> kq;
bool check = false;

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    kq.clear();
    check = false;
}

void Try(int i, int j, string s)
{
    if (a[1][1] == 0)
    {
        check = false;
        return;
    }
    if (i == n && j == n && a[i][j] == 1)
    {
        kq.put_back(s);
        check = true;
        return;
    }
    if (i < n && a[i + 1][j] == 1)
    {
        Try(i + 1, j, s + "D")
    }
    if (j < n && a[i][j + 1] == 1)
    {
        Try(i, j + 1, s + "R")
    }
}

main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        nhap();
        Try(1, 1, "");
        if (check == false)
            cout << -1;
        else
        {
            sort(kq.begin(), kq.end());
            for (int i = 0; i < kq.size(); i++)
            {
                cout << kq[i] << ' ';
            }
        }
        cout << endl;
    }
}
