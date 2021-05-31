#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
 char val;
 node *left, *right;
};
node *newNode(char v)
{
 node *tmp = new node;
 tmp->val = v;
 tmp->left = tmp->right = NULL;
 return tmp;
}
void inOrder(node *t)
{
 if (t != NULL)
 {
		inOrder(t->left);
		cout << t->val;
		// cout << t->val << " ";
		inOrder(t->right);
 }
}
bool isOperator(char c)
{
 if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
		return true;
 return false;
}
node *builTree(string s)
{
 stack<node *> st;
 node *t, *t1, *t2;
 for (int i = 0; s[i]; i++)
 {
		if (!isOperator(s[i]))
		{
			t = newNode(s[i]);
			st.push(t);
		}
		else
		{
			t = newNode(s[i]);
			t1 = st.top();
			st.pop();
			t2 = st.top();
			st.pop();
			t->left = t2;
			t->right = t1;
			st.push(t);
		}
 }
 return st.top();
}
main()
{
 int t;
 cin >> t;
 while (t--)
 {
		string s;
		cin >> s;
		node *t = builTree(s);
		inOrder(t);
		cout << endl;
 }
}
