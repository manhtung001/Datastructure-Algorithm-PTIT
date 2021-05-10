#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a1[100007], a2[100007], a[100007], n;
void xuli()
{
    ll sum = 0, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a1[i] = a[i];
        a2[i] = a[i];
    }
    stack<ll> b;
    stack<ll> res;
    for (int i = 1; i <= n; i++)
    {
        if (res.empty())
        {
            res.push(a[i]);
            b.push(i);
        }
        else
        {
            if (a[i] >= res.top())
            {
                res.push(a[i]);
                b.push(i);
            }
            else
            {
                while (!res.empty() && res.top() > a[i])
                {
                    a1[b.top()] = i;
                    res.pop();
                    b.pop();
                }
                res.push(a[i]);
                b.push(i);
            }
        }
    }
    while (!res.empty())
    {
        a1[b.top()] = n + 1;
        res.pop();
        b.pop();
    }
    for (int i = n; i >= 1; i--)
    {
        if (res.empty())
        {
            res.push(a[i]);
            b.push(i);
        }
        else
        {
            if (a[i] >= res.top())
            {
                res.push(a[i]);
                b.push(i);
            }
            else
            {
                while (!res.empty() && res.top() > a[i])
                {
                    a2[b.top()] = i;
                    res.pop();
                    b.pop();
                }
                res.push(a[i]);
                b.push(i);
            }
        }
    }
    while (!res.empty())
    {
        a2[b.top()] = 0;
        res.pop();
        b.pop();
    }
    for (int i = 1; i <= n; i++)
        sum = max(sum, (a1[i] - a2[i] - 1) * a[i]);
    cout << sum;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        xuli();
        cout << endl;
    }
}
