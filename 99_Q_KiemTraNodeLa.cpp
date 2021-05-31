#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
 int val;
 node *left, *right;
};
node *newNode(int v)
{
 node *tmp = new node;
 tmp->val = v;
 tmp->left = tmp->right = NULL;
 return tmp;
}
bool xuli(node *t, int level, int &x)
{
 if (t == NULL)
		return true;
 if (t->left == NULL && t->right == NULL)
 {
		if (x == 0)
		{
			x = level;
			return true;
		}
		return (level == x);
 }
 return xuli(t->left, level + 1, x) && xuli(t->right, level + 1, x);
}
int check(node *t)
{
 int level = 0, x = 0;
 return xuli(t, level, x);
}
node *builTree(int n)
{
 map<int, node *> m;
 node *t = NULL;
 while (n--)
 {
		int a, b;
		char c;
		cin >> a >> b >> c;
		node *father;
		if (m.find(a) == m.end())
		{
			father = newNode(a);
			m[a] = father;
			if (t == NULL)
				t = father;
		}
		else
			father = m[a];
		node *baby = newNode(b);
		if (c == 'L')
			father->left = baby;
		else if (c == 'R')
			father->right = baby;
		m[b] = baby;
 }
 return t;
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
		int n;
		cin >> n;
		node *t = builTree(n);
		cout << check(t) << endl;
 }
}
