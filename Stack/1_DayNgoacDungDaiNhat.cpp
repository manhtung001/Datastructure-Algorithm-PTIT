#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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