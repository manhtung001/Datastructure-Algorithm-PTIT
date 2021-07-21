#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int checkSum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
        else
            sum = sum - i;
    }
    if (sum % 2 == 0)
        return sum;
    return sum + 1;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        stack<ll> st;
        st.push(-1);
        ll res = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.size() == 0)
                    st.push(i);
                else
                {
                    res = max(res, i - st.top());
                }
            }
        }
        cout << res << endl;
    }
}