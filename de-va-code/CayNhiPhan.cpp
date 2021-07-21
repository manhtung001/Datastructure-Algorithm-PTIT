B1: Ki?m tra node l�
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� ki?m tra xem t?t c? c�c node l� c?a c�y c� c�ng m?t m?c hay kh�ng? V� d? v?i c�y d??i ?�y s? cho ta k?t qu? l� Yes.
 
����� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 2 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
����� V� d?:
Input	Output
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R	1
0

Code : 
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
bool isSameLevel(Node *root, int currLevel, int reset){
	static int level = -1;
	if (reset)
		level = -1;
	if (root->left==NULL && root->right==NULL){
		if (level == -1){
			level = currLevel;
			return true;
		}
		else if (level == currLevel)
			return true;
		else
			return false;
	}
	int lRes = true;
	int rRes = true;
	if (root->left)
		lRes = isSameLevel(root->left, currLevel+1, false);
	if (root->right)
		rRes = isSameLevel(root->right, currLevel+1, false);
	if (!lRes || !rRes)
		return false;
	return true;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		if (isSameLevel(root, 0, true))
			cout << 1;
		else 
			cout << 0;	
		cout << endl;
	}	
}
 C�Y BI?U TH?C 2
B�i l�m t?t nh?t
Cho m?t c�y bi?u th?c l� m?t c�y nh? ph�n ??y ?? bao g?m c�c ph�p to�n +, -, *. / v� m?t s? to�n h?ng c� gi� tr? nguy�n. Nhi?m v? c?a b?n l� h�y t�nh to�n gi� tr? bi?u th?c ???c bi?u di?n tr�n c�y nh? ph�n ??y ??. V� d? v?i c�y d??i ?�y l� bi?u di?n c?a bi?u th?c P = ( (5*4) + (100-20)) s? cho ta gi� tr? l� 100.
Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test l� g?m hai d�ng: d�ng th? nh?t ??a v�o N l� s? l??ng node c?a c�y; d�ng th? hai ??a v�o n?i dung c�c node c?a c�y; c�c node ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng. C�c s? c� gi� tr? nguy�n kh�ng v??t qu� 1000.
?	T, N, P th?a m�n r�ng bu?c : 1?T?100; 1?N, lenght(P)?100.
Output:
?	??a ra gi� tr? c?a c�y bi?u th?c.
���� V� d?:
Input	Output
2
7
+ * - 5 4 100 20
3
- 4 7�	100
-3

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	string val;
	node *left, *right; 
};
node *newNode(string s){
	node *tmp = new node;
	tmp->val = s;
	tmp->left = tmp->right = NULL;
	return tmp;
}
bool isOperator(string c) { 
    if(c == "+" || c == "-" || c == "*" || c == "/") 
        return true; 
    return false; 
}
int gtri(string s){
	int res = 0, i = 0;
	if(s[0] == '-') i++;
	for(i = 0; i < s.size(); i++) res = res*10 + (s[i]-'0');
	if(s[0] == '-') return -res;
	return res;
} 
int kq(node *t){
	if(t == NULL) return 0;
	if(t->left == 0 && t->right == 0) return gtri(t->val);
	int l = kq(t->left);   
    int r = kq(t->right);  
    if(t->val == "+")  return l+r;  
    if(t->val == "-")  return l-r;
    if(t->val == "*")  return l*r;
    return l/r;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s[n];
		int i;
		for(i = 0; i < n; i++){
			cin >> s[i];
		}
		i=0;
		node *t = newNode(s[i++]);
		queue<node*> q;
		q.push(t);
		while(!q.empty()){
			node *t1, *t2, *t3;
			t1 = q.front(); q.pop();
			if(isOperator(t1 -> val)){
				t2 = newNode(s[i++]);
				t3 = newNode(s[i++]);
				t1 -> left = t2;
				t1 -> right = t3;
				q.push(t2);
				q.push(t3);
			}
		}
		cout << kq(t) << endl;
	}
}

DUY?T C�Y 1
B�i l�m t?t nh?t
Cho ph�p duy?t c�y nh? ph�n Inorder v� Preorder, h�y ??a ra k?t qu? ph�p duy?t Postorder c?a c�y nh? ph�n. V� d? v?i c�y nh? ph�n c� c�c ph�p duy?t c�y nh? ph�n c?a c�y d??i ?�y:
Inorder���� : 4� 2� 5� 1� 3� 6
Preorder:� : 1� 2� 4� 5� 3� 6
Postorder : 4� 5� 2� 6� 3� 1�
�����Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng node; d�ng ti?p theo ??a v�o N s? theo ph�p duy?t Inorder; d�ng cu?i c�ng ??a v�o N s? l� k?t qu? c?a ph�p duy?t Preorder; c�c s? ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, node th?a m�n r�ng bu?c: 1?T?100; 1?N?1000; 1? gi� tr? node ?104;
Output:
?	??a ra k?t qu? ph�p duy?t Postorder theo t?ng d�ng.
���� V� d?:
Input	Output
1
6
4� 2� 5� 1� 3� 6
1� 2� 4� 5� 3� 6
�	4� 5� 2� 6� 3� 1
�


#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int x, int n){
	for (int i=0; i<n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
void PrintPostOrder(int inOrder[], int preOrder[], int n){
	int root = search(inOrder, preOrder[0], n);
	if (root != 0)
		PrintPostOrder(inOrder, preOrder+1, root);
	if (root != n-1)
		PrintPostOrder(inOrder+root+1, preOrder+root+1, n-root-1);
	cout << preOrder[0] << " ";
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int *inOrder = new int[n+1];
		int *preOrder = new int[n+1];
		for (int i=0; i<n; i++) cin >> inOrder[i];
		for (int i=0; i<n; i++) cin >> preOrder[i];
		PrintPostOrder(inOrder, preOrder, n);
		cout << endl;
	}
}
DUY?T C�Y THEO M?C
B�i l�m t?t nh?t
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� duy?t c�y theo Level-order. Ph�p duy?t level-order tr�n c�y l� ph�p th?m node theo t?ng m?c c?a c�y. V� d? v?i c�y d??i ?�y s? cho ta k?t qu? c?a ph�p duy?t level-order: 20� 8� 22� 4� 12� 10� 14.
 
��� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 2 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? ph�p duy?t level-order theo t?ng d�ng.
���� V� d?:
Input	Output
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R	1 3 2
10 20 30 40 60

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
void solve(Node *root){
	queue<Node *> q;
	q.push(root);
	while (!q.empty()){
		Node *node = q.front();
		cout << node->data << " ";
		q.pop();
		if (node->left != NULL)
			q.push(node->left);
		if (node->right != NULL)
			q.push(node->right);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		solve(root);	
		cout << endl;
	}
}
DUY?T C�Y 2
B�i l�m t?t nh?t
Cho hai m?ng l� ph�p duy?t Inorder v� Level-order, nhi?m v? c?a b?n l� x�y d?ng c�y nh? ph�n v� ??a ra k?t qu? ph�p duy?t Postorder. Level-order l� ph�p duy?t theo t?ng m?c c?a c�y. V� d? nh? c�y d??i ?�y ta c� ph�p Inorder v� Level-order nh? d??i ?�y:
Inorder : 4� 8� 10� 12 14 20 22
Level order: 20� 8� 22� 4� 12� 10� 14

����� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng node; d�ng ti?p theo ??a v�o N s? l� ph�p duy?t Inorder; d�ng cu?i c�ng ??a v�o N s? l� ph�p duy?t Level-order; c�c s? ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, node th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?A[i]?104;
Output:
?	??a ra k?t qu? ph�p duy?t Postorder theo t?ng d�ng.
���� V� d?:
Input	Output
2
3
1 0 2�
0 1 2�
7
3 1 4 0 5 2 6�
0 1 2 3 4 5 6�	1 2 0
3 4 1 5 6 2 0
�

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int inorder[], int levelorder[], int start, int end, int n){
	if (n <= 0)
		return NULL;
	Node *root = CreateNode(levelorder[0]);
	int index = -1;
	for (int i=start; i<=end; i++){
		if (levelorder[0] == inorder[i]){
			index = i;
			break;
		}
	}
	unordered_set<int> s;
	for (int i=start; i<index; i++) //insert left nodes
		s.insert(inorder[i]);
	int ls[s.size()];	//left
	int rs[end-start-s.size()];	//right
	int li = 0, ri = 0;
	for (int i=1; i<n; i++){
		if (s.find(levelorder[i]) != s.end())	// not exist
			ls[li++] = levelorder[i];
		else
			rs[ri++] = levelorder[i];
	}
	root->left = ConstructTree(inorder, ls, start, index-1, index-start);
	root->right = ConstructTree(inorder, rs, index+1, end, end-index);
	return root;
}
void printPostorder(Node *root){
	if(root){
		printPostorder(root->left);
		printPostorder(root->right);
		cout << root->data << " ";
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int *inorder = new int[n+1];
		int *levelorder = new int[n+1];
		for (int i=0; i<n; i++) cin >> inorder[i];
		for (int i=0; i<n; i++) cin >> levelorder[i];
		Node *root = ConstructTree(inorder, levelorder, 0, n-1, n);
		printPostorder(root);
		cout << endl;
	}
}

�DUY?T C�Y NH? PH�N T�M KI?M 1
B�i l�m t?t nh?t
Cho m?ng A[] g?m N node l� bi?u di?n ph�p duy?t theo th? t? gi?a (Preorder) c?a c�y nh? ph�n t�m ki?m. Nhi?m v? c?a b?n l� ??a ra ph�p duy?t theo th? t? sau c?a c�y nh? ph�n t�m ki?m.
������������Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 2 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng node; d�ng ti?p theo ??a v�o N s? A[i]; c�c s? ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, node th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?A[i]?104;
Output:
?	??a ra k?t qu? ph�p duy?t Postorder theo t?ng d�ng.
���� V� d?:
�
Input	Output
2
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120	35 30 100 80 40
35 32 30 120 100 90 80 40
�

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void InsertNode(Tree &root, int x){
	if (root){
		if (root->data == x) return;
		else{
			if (x < root->data) InsertNode(root->left, x);
			else InsertNode(root->right, x);
		}
	}
	else{
		Node *p = CreateNode(x);
		root = p;
	}
}
void CreateTree(Tree &root){
	int n; cin >> n;
	int x;
	while (n--){
		cin >> x;
		InsertNode(root, x);
	}
}
void solve(Tree root){
	if(root){
		solve(root->left);
		solve(root->right);
		cout<< root->data << " ";
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		Tree root;
		root = NULL;
		CreateTree(root);
		solve(root);
		cout << endl;
	}
}

DUY?T C�Y KI?U XO?N ?C
B�i l�m t?t nh?t
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� duy?t c�y theo xo?n ?c (spiral-order). Ph�p. V� d? v?i c�y d??i ?�y s? cho ta k?t qu? c?a ph�p duy?t spiral-order: 1 2 3� 4 5 6 7.
�

���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 2 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? ph�p duy?t level-order theo t?ng d�ng.
���� V� d?:
Input	Output
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R	1 3 2
10 0 30 60 40

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
void solve(Node *root){
	stack<Node *> s1;	//right to left
	stack<Node *> s2;	//left to right
	s1.push(root);
	while (!s1.empty() || !s2.empty()){
		while (!s1.empty()){
			Node *temp = s1.top();
			s1.pop();
			cout << temp->data << " ";
			if (temp->right)
				s2.push(temp->right);
			if (temp->left)
				s2.push(temp->left);			
		}
		while (!s2.empty()){
			Node *temp = s2.top();
			s2.pop();
			cout << temp->data << " ";
			if (temp->left)
				s1.push(temp->left);
			if (temp->right)
				s1.push(temp->right);
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		solve(root);	
		cout << endl;
	}
}
C�Y NH? PH�N HO�N H?O
B�i l�m t?t nh?t
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� ki?m tra xem c�y nh? ph�n c� ph?i l� m?t c�y ho�n h?o hay kh�ng (perfect tree)? M?t c�y nh? ph�n ???c g?i l� c�y ho�n h?o n?u t?t c? c�c node trung gian c?a n� ??u c� hai node con v� t?t c? c�c node l� ??u c� c�ng m?t m?c.
����� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 2 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
����� V� d?:
Input	Output
3
6
10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
2
18 15 L 18 30 R
5
1 2 L 2 4 R 1 3 R 3 5 L 3 6 R	Yes
Yes
No


#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
int findDepth(Node *node){
	int depth = 0;
	while (node != NULL){
		depth++;
		node = node->left;
	}
	return depth;
}
bool isPerfectTree(Node *root, int depth, int level=0){
	if (root == NULL)
		return true;
	if (root->left==NULL && root->right==NULL)
		return (depth == level+1);
	if (root->left==NULL || root->right==NULL)
		return false;
	return (isPerfectTree(root->left, depth, level+1) && isPerfectTree(root->right, depth, level+1));
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		int depth = findDepth(root);
		if (isPerfectTree(root, depth))
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
}
C�Y NH? PH�N B?NG NHAU
B�i l�m t?t nh?t
Cho hai c�y nh? ph�n, nhi?m v? c?a b?n l� ki?m tra xem c�y nh? ph�n c� gi?ng nhau hay kh�ng?
��� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i c?a m?i c�y; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
����� V� d?:
Input	Output
2
2
1 2 L 1�3 R
2
1 2 L 1�3 R
2
1 2 L 1�3 R
2
1 3 L 1 2 R	1
0


#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
bool isEqualTrees(Node *root1, Node *root2){
	if (root1==NULL && root2==NULL)
		return true;
	if (root1!=NULL && root2!=NULL)
		return(root1->data==root2->data && isEqualTrees(root1->left, root2->left)
		 && isEqualTrees(root1->right, root2->right));
	return false;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root1 = ConstructTree(n);
		int m; cin >> m;
		Node *root2 = ConstructTree(m);
		if (isEqualTrees(root1, root2))
			cout << 1;
		else 
			cout << 0;
		cout << endl;
	}
}
T?NG NODE L� B�N PH?I
B�i l�m t?t nh?t
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� t�nh t?ng c?a t?t c? c�c node l� b�n ph?i tr�n c�y? V� d? v?i c�y d??i ?�y ta c� k?t qu? l� 2.
 
�
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
������V� d?:
Input	Output
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L	3
60

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
void leftSum(Node *root, Node *parent, int &sum){
	if (root){
		leftSum(root->left, root, sum);
		if (!root->left && !root->right && parent->right==root)
			sum += root->data;
		leftSum(root->right, root, sum);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		int sum = 0;
		leftSum(root, root, sum);
		cout << sum << endl;
	}
}
T?NG L?N NH?T
B�i l�m t?t nh?t
Cho c�y nh? ph�n c� gi� tr? m?i node l� m?t s?, nhi?m v? c?a b?n l� t�m t?ng l?n nh?t t? m?t node l� n�y sang m?t node l� kh�c? V� d? v?i c�y d??i ?�y ta c� t?ng l?n nh?t l� 27.
 
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
����� V� d?:
Input	Output
1
12
-15 5 L -15 6 R 5 -8 L 5 1 R -8 2 L -8 -3 R 6 3 L 6 9 R 9 0 R 0 4 L 0 -1 R -1 10 L	27
	

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void Insert(Node *root, int a, int b, char c){
    if(a == root->data){
        if(c == 'L'){
            root->left = CreateNode(b);
            return;
        }
        if(c=='R'){
            root->right= CreateNode(b);
            return;
        }
    }
    else if(root->left==NULL && root->right==NULL)
        return;
    else{
        if(root->left)
            Insert(root->left, a, b, c);
        if(root->right)
            Insert(root->right, a, b, c);
    }
}
int maxSum(Node *root, int &res){
	if (!root) return 0;
	if (!root->left && !root->right) return root->data;
	int ls = maxSum(root->left, res);
	int rs = maxSum(root->right, res);
	if (root->left && root->right){
		res = max(res, ls+rs+root->data);
		return max(ls, rs) + root->data;
	}
	if (!root->left)
		return rs + root->data;
	else
		return ls + root->data;
}
int Result(Node *root){
	int res = INT_MIN;
	maxSum(root, res);
	return res;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = NULL;
		while (n--){
			int a, b; char c;
			cin >> a >> b >> c;
			if (root == NULL)
				root = CreateNode(a);
			Insert(root, a, b, c);
		}
		cout << Result(root) << endl;
	}
}
�BI?N ??I SANG C�Y NH? PH�N T�M KI?M
B�i l�m t?t nh?t
Cho c�y nh? ph�n, nhi?m v? c?a b?n l� d?ch chuy?n c�y nh? ph�n th�nh c�y nh? ph�n t�m ki?m. Ph�p d?ch chuy?n ph?i b?o to�n ???c c?u tr�c c�y nh? ph�n ban ??u. V� d? d??i ?�y s? minh h?a ph�p d?ch chuy?n:
 
��� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m 3 d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng c?nh c?a c�y; d�ng ti?p theo ??a v�o N b? ba (u, v, x), trong ?� u l� node cha, v l� node con, x= R n?u v l� con ph?i, x=L n?u v l� con tr�i; u, v, x ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, u, v, th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng l� ph�p duy?t Inorder c?a c�y t�m ki?m.
���� V� d?:
Input	Output
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R	1 2 3
10 20 30 40 60

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *ConstructTree(int n){
	map<int, Node*> m;
	Node *root = NULL;
	while (n--){
		int a, b; char c;
		cin >> a >> b >> c;
		Node *parent;
		if (m.find(a) == m.end()){
			parent = CreateNode(a);
			m[a] = parent;
			if (root == NULL)
				root = parent;
		}
		else
			parent = m[a];
		Node *child = CreateNode(b);
		if (c == 'L')
			parent->left = child;
		else
			parent->right = child;
		m[b] = child;
	}
	return root;
}
void store(Node *root, auto &set){
	if (!root)
		return;
	store(root->left, set);
	set.insert(root->data);
	store(root->right, set);
}
void convert(Node *root, auto &it){
	if (!root)
		return;
	convert(root->left, it);
	root->data = *it;
	it++;
	convert(root->right, it);
}
void inorder(Node *root){
	if (root){
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Node *root = ConstructTree(n);
		set<int> set;
		store(root, set);
		auto it = set.begin();
		convert(root, it);
		inorder(root);
		cout << endl;
	}
}
X�Y D?NG L?I C�Y NH? PH�N T�M KI?M
B�i l�m t?t nh?t
Cho m?t m?ng l� ph�p duy?t level-order c?a c�y nh? ph�n t�m ki?m. Nhi?m v? c?a b?n l� x�y d?ng l?i c�y nh? ph�n t�m ki?m b?o to�n ???c c?u tr�c c�y nh? ph�n ban ??u.
�� ��Input:
?	D�ng ??u ti�n ??a v�o s? l??ng test T.
?	Nh?ng d�ng ti?p theo ??a v�o c�c b? test. M?i b? test g?m d�ng: d�ng ??u ti�n ??a v�o s? N l� s? l??ng node c?a c�y t�m ki?m; d�ng ti?p theo ??a v�o ph�p duy?t level-order c?a c�y t�m ki?m; c�c s? ???c vi?t c�ch nhau m?t v�i kho?ng tr?ng.
?	T, N, node th?a m�n r�ng bu?c: 1?T?100; 1?N?103; 1?node?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng l� ph�p duy?t tr??c (preOrder) c?a c�y t�m ki?m.
����� V� d?:
Input	Output
2
9
7 4 12 3 6 8 1 5 10
6
1 3 4 6 7 8	7 4 3 1 6 5 12 8 10
1 3 4 6 7 8

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void InsertNode(Tree &root, int x){
	if (root){
		if (root->data == x) return;
		else{
			if (x < root->data) InsertNode(root->left, x);
			else InsertNode(root->right, x);
		}
	}
	else{
		Node *p = CreateNode(x);
		root = p;
	}
}
void CreateTree(Tree &root){
	int n; cin >> n;
	int x;
	while (n--){
		cin >> x;
		InsertNode(root, x);
	}
}	
void solve(Tree root){
	if(root){
		cout<< root->data << " ";
		solve(root->left);
		solve(root->right);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		Tree root;
		root = NULL;
		CreateTree(root);
		solve(root);
		cout << endl;
	}
}
NODE L� C?A C�Y NH? PH�N T�M KI?M
B�i l�m t?t nh?t
Cho d�y s? g?m N s? l� ph�p duy?t theo th? t? tr??c (Preorder) c?a m?t c�y nh? ph�n t�m ki?m. H�y in ra t?t c? c�c node l� c?a c�y ?
V� d? v?i d�y A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} l� ph�p duy?t c�y theo th? t? tr??c s? cho ta k?t qu?: 15, 23, 28, 33, 38, 45.�������������������������������������������
��� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T (T?100).
?	Nh?ng d�ng k? ti?p ??a v�o T b? test. M?i b? test g?m 2 d�ng: d�ng th? nh?t l� s? t? nhi�n N (N?1000). D�ng ti?p theo l� N s? l� ph�p duy?t theo th? t? tr??c c?a c�y BST.
���Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
�� V� d?:
Input	Output
2
6
10 5 1 7 40 50
11
30 20 15 25 23 28 40 35 33 38 45	1 7 50
15 23 28 33 38 45


#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void InsertNode(Tree &root, int x){
	if (root){
		if (root->data == x) return;
		else{
			if (x < root->data) InsertNode(root->left, x);
			else InsertNode(root->right, x);
		}
	}
	else{
		Node *p = CreateNode(x);
		root = p;
	}
}
void CreateTree(Tree &root){
	int n; cin >> n;
	int x;
	while (n--){
		cin >> x;
		InsertNode(root, x);
	}
}
void printLeafNodes(Tree root){
	if (!root)
		return;
	if (!root->left && !root->right){
		cout << root->data << " ";
		return;
	}
	if (root->left)
		printLeafNodes(root->left);
	if (root->right)
		printLeafNodes(root->right);
}
int main(){
	int t; cin >> t;
	while (t--){
		Tree root;
		root = NULL;
		CreateTree(root);
		printLeafNodes(root);
		cout << endl;
	}
}

NODE TRUNG GIAN C?A C�Y NH? PH�N T�M KI?M
B�i l�m t?t nh?t
Cho d�y s? g?m N s? l� ph�p duy?t theo th? t? tr??c (Preorder) c?a m?t c�y nh? ph�n t�m ki?m. H�y ??a ra s? c�c node trung gian c?a c�y ?
V� d? v?i d�y A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} l� ph�p duy?t c�y theo th? t? tr??c s? cho ta k?t qu? l� 5 bao g?m c�c node: 30, 20, 25, 40, 35.���������������������
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T (T?100).
?	Nh?ng d�ng k? ti?p ??a v�o T b? test. M?i b? test g?m 2 d�ng: d�ng th? nh?t l� s? t? nhi�n N (N?1000). D�ng ti?p theo l� N s? l� ph�p duy?t theo th? t? tr??c c?a c�y BST.
���� Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
��� V� d?:
Input:	Output
2
6
10 5 1 7 40 50
11
30 20 15 25 23 28 40 35 33 38 45	3
5


#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void InsertNode(Tree &root, int x){
	if (root){
		if (root->data == x) return;
		else{
			if (x < root->data) InsertNode(root->left, x);
			else InsertNode(root->right, x);
		}
	}
	else{
		Node *p = CreateNode(x);
		root = p;
	}
}
void CreateTree(Tree &root){
	int n; cin >> n;
	int x;
	while (n--){
		cin >> x;
		InsertNode(root, x);
	}
}
void solve(Tree root, int &c){
	if (root){
		solve(root->left, c);
		if (root->left || root->right)
			c++;
		solve(root->right, c);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		Tree root;
		root = NULL;
		CreateTree(root);
		int c = 0;
		solve(root, c);
		cout << c << endl;
	}
}
?? S�U C�Y NH? PH�N T�M KI?M
B�i l�m t?t nh?t
Cho d�y s? g?m N s? l� ph�p duy?t theo th? t? tr??c (Preorder) c?a m?t c�y nh? ph�n t�m ki?m. H�y t�m ?? s�u c?a c�y ?
V� d? v?i d�y A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} l� ph�p duy?t c�y theo th? t? tr??c s? cho ta k?t qu? l� 3.��������������������������������������������������
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T (T?100).
?	Nh?ng d�ng k? ti?p ??a v�o T b? test. M?i b? test g?m 2 d�ng: d�ng th? nh?t l� s? t? nhi�n N (N?1000). D�ng ti?p theo l� N s? l� ph�p duy?t theo th? t? tr??c c?a c�y BST.
��� Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
��� V� d?:
Input:	Output
2
6
10 5 1 7 40 50
11
30 20 15 25 23 28 40 35 33 38 45	2
3

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
typedef Node *Tree;
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void InsertNode(Tree &root, int x){
	if (root){
		if (root->data == x) return;
		else{
			if (x < root->data) InsertNode(root->left, x);
			else InsertNode(root->right, x);
		}
	}
	else{
		Node *p = CreateNode(x);
		root = p;
	}
}
void CreateTree(Tree &root){
	int n; cin >> n;
	int x;
	while (n--){
		cin >> x;
		InsertNode(root, x);
	}
}
int MaxDepth(Tree root){
	if (!root) return -1;
	return max(MaxDepth(root->left), MaxDepth(root->right))+1;
}
int main(){
	int t; cin >> t;
	while (t--){
		Tree root;
		root = NULL;
		CreateTree(root);
		cout << MaxDepth(root) << endl;
	}
}

�C�Y NH? PH�N T�M KI?M C�N B?NG 1
B�i l�m t?t nh?t
H�y x�y d?ng m?t c�y nh? ph�n t�m ki?m c�n b?ng t? d�y s? A[] =(a0, a1, .., an-1}. ??a ra n?i dung node g?c c?a c�y t�m ki?m c�n b?ng.� V� d? v?i d�y A[]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta s? c� c�y nh? ph�n t�m ki?m c�n b?ng v?i node g?c l� 33.
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T (T?100).
?	Nh?ng d�ng k? ti?p ??a v�o T b? test. M?i b? test g?m 2 d�ng: d�ng th? nh?t l� s? t? nhi�n N (N?106). D�ng ti?p theo l� N s? c?a m?ng A[].
���� Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
���� V� d?:
Input	Output
2
11
40� 28� 45 38� 33� 15� 25� 20� 23� 35� 30
10
1� 2� 3� 4� 5� 6� 7� 8� 9 �10	30
5
�


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n, *arr; cin >> n;
		arr = new int[n+1];
		for (int i=0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		int mid = (n-1)/2;
		int root = arr[mid];
		cout << root << endl;
	}
}
�C�Y NH? PH�N T�M KI?M C�N B?NG 2
B�i l�m t?t nh?t
H�y x�y d?ng m?t c�y nh? ph�n t�m ki?m c�n b?ng t? d�y s? A[] =(a0, a1, .., an-1}. ??a ra ph�p duy?t theo th? t? tr??c (preorder) c?a c�y t�m ki?m c�n b?ng.� V� d? v?i d�y A[]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta s? c� ph�p duy?t theo th? t? tr??c c?a c�y nh? ph�n t�m ki?m c�n b?ng v?i node g?c l� 33 : 33, 25, 20, 15, 23, 28, 30, 40, 38, 35, 45.
���� Input:
?	D�ng ??u ti�n ??a v�o s? l??ng b? test T (T?100).
?	Nh?ng d�ng k? ti?p ??a v�o T b? test. M?i b? test g?m 2 d�ng: d�ng th? nh?t l� s? t? nhi�n N (N?106). D�ng ti?p theo l� N s? c?a m?ng A[].
���� Output:
?	??a ra k?t qu? m?i test theo t?ng d�ng.
���� V� d?:
Input	Output
2
11
40� 28� 45 38� 33� 15� 25� 20� 23� 35� 30
10
1� 2� 3� 4� 5� 6� 7� 8� 9� 10	30 23 15 20 25 28 38 33 35 40 45
5 2 1 3 4 8 6 7 9 10


#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
};
Node *CreateNode(int x){
	Node *p = new Node();
	if (!p) exit(1);
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
Node *binarySearch(int arr[], int s, int e){
	if (s > e)
		return NULL;
	int mid = (s+e)/2;
	Node *root = CreateNode(arr[mid]);
	root->left = binarySearch(arr, s, mid-1);
	root->right = binarySearch(arr, mid+1, e);
	return root;
}
void preOrder(Node *root){
	if (root){
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main(){
	int t; cin >> t;
	while (t--){
		int n, *arr; cin >> n;
		arr = new int[n+1];
		for (int i=0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		Node *root = binarySearch(arr, 0, n-1);
		preOrder(root);
		cout << endl;
	}
}

