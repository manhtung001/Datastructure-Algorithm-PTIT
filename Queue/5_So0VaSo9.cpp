#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        queue<ll> q;
        q.push(9);
        while (true)
        {
            ll temp = q.front();
            if (temp % n == 0)
            {
                cout << temp << endl;
                break;
            }
            q.pop();
            q.push(10 * temp);
            q.push(10 * temp + 9);
        }
    }
}
