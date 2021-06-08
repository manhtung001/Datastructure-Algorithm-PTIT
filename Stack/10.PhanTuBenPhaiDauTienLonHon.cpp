#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  ll n;
  cin >> n;
  ll *a = new ll[n + 1];
  for (ll i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  ll *x = new ll[n + 1];
  stack<ll> st;
  for (ll i = n - 1; i >= 0; i--)
  {
   while (!st.empty() && a[i] >= st.top())
    st.pop();

   if (st.empty())
   {
    x[i] = -1;
   }
   else
   {
    x[i] = st.top();
   }
   st.push(a[i]);
  }

  for (ll i = 0; i < n; i++)
  {
   cout << x[i] << " ";
  }
  cout << endl;
 }
}