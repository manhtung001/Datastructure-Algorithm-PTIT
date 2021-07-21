B1: Ki?m tra node lá
Cho cây nh? phân, nhi?m v? c?a b?n là ki?m tra xem t?t c? các node lá c?a cây có cùng m?t m?c hay không? Ví d? v?i cây d??i ?ây s? cho ta k?t qu? là Yes.
 
      Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
      Ví d?:
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
 CÂY BI?U TH?C 2
Bài làm t?t nh?t
Cho m?t cây bi?u th?c là m?t cây nh? phân ??y ?? bao g?m các phép toán +, -, *. / và m?t s? toán h?ng có giá tr? nguyên. Nhi?m v? c?a b?n là hãy tính toán giá tr? bi?u th?c ???c bi?u di?n trên cây nh? phân ??y ??. Ví d? v?i cây d??i ?ây là bi?u di?n c?a bi?u th?c P = ( (5*4) + (100-20)) s? cho ta giá tr? là 100.
Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test là g?m hai dòng: dòng th? nh?t ??a vào N là s? l??ng node c?a cây; dòng th? hai ??a vào n?i dung các node c?a cây; các node ???c vi?t cách nhau m?t vài kho?ng tr?ng. Các s? có giá tr? nguyên không v??t quá 1000.
?	T, N, P th?a mãn ràng bu?c : 1?T?100; 1?N, lenght(P)?100.
Output:
?	??a ra giá tr? c?a cây bi?u th?c.
     Ví d?:
Input	Output
2
7
+ * - 5 4 100 20
3
- 4 7 	100
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

DUY?T CÂY 1
Bài làm t?t nh?t
Cho phép duy?t cây nh? phân Inorder và Preorder, hãy ??a ra k?t qu? phép duy?t Postorder c?a cây nh? phân. Ví d? v?i cây nh? phân có các phép duy?t cây nh? phân c?a cây d??i ?ây:
Inorder     : 4  2  5  1  3  6
Preorder:  : 1  2  4  5  3  6
Postorder : 4  5  2  6  3  1 
     Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng node; dòng ti?p theo ??a vào N s? theo phép duy?t Inorder; dòng cu?i cùng ??a vào N s? là k?t qu? c?a phép duy?t Preorder; các s? ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, node th?a mãn ràng bu?c: 1?T?100; 1?N?1000; 1? giá tr? node ?104;
Output:
?	??a ra k?t qu? phép duy?t Postorder theo t?ng dòng.
     Ví d?:
Input	Output
1
6
4  2  5  1  3  6
1  2  4  5  3  6
 	4  5  2  6  3  1
 


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
DUY?T CÂY THEO M?C
Bài làm t?t nh?t
Cho cây nh? phân, nhi?m v? c?a b?n là duy?t cây theo Level-order. Phép duy?t level-order trên cây là phép th?m node theo t?ng m?c c?a cây. Ví d? v?i cây d??i ?ây s? cho ta k?t qu? c?a phép duy?t level-order: 20  8  22  4  12  10  14.
 
    Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? phép duy?t level-order theo t?ng dòng.
     Ví d?:
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
DUY?T CÂY 2
Bài làm t?t nh?t
Cho hai m?ng là phép duy?t Inorder và Level-order, nhi?m v? c?a b?n là xây d?ng cây nh? phân và ??a ra k?t qu? phép duy?t Postorder. Level-order là phép duy?t theo t?ng m?c c?a cây. Ví d? nh? cây d??i ?ây ta có phép Inorder và Level-order nh? d??i ?ây:
Inorder : 4  8  10  12 14 20 22
Level order: 20  8  22  4  12  10  14

      Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng node; dòng ti?p theo ??a vào N s? là phép duy?t Inorder; dòng cu?i cùng ??a vào N s? là phép duy?t Level-order; các s? ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, node th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?A[i]?104;
Output:
?	??a ra k?t qu? phép duy?t Postorder theo t?ng dòng.
     Ví d?:
Input	Output
2
3
1 0 2 
0 1 2 
7
3 1 4 0 5 2 6 
0 1 2 3 4 5 6 	1 2 0
3 4 1 5 6 2 0
 

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

 DUY?T CÂY NH? PHÂN TÌM KI?M 1
Bài làm t?t nh?t
Cho m?ng A[] g?m N node là bi?u di?n phép duy?t theo th? t? gi?a (Preorder) c?a cây nh? phân tìm ki?m. Nhi?m v? c?a b?n là ??a ra phép duy?t theo th? t? sau c?a cây nh? phân tìm ki?m.
            Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào s? N là s? l??ng node; dòng ti?p theo ??a vào N s? A[i]; các s? ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, node th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?A[i]?104;
Output:
?	??a ra k?t qu? phép duy?t Postorder theo t?ng dòng.
     Ví d?:
 
Input	Output
2
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120	35 30 100 80 40
35 32 30 120 100 90 80 40
 

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

DUY?T CÂY KI?U XO?N ?C
Bài làm t?t nh?t
Cho cây nh? phân, nhi?m v? c?a b?n là duy?t cây theo xo?n ?c (spiral-order). Phép. Ví d? v?i cây d??i ?ây s? cho ta k?t qu? c?a phép duy?t spiral-order: 1 2 3  4 5 6 7.
 

     Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? phép duy?t level-order theo t?ng dòng.
     Ví d?:
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
CÂY NH? PHÂN HOÀN H?O
Bài làm t?t nh?t
Cho cây nh? phân, nhi?m v? c?a b?n là ki?m tra xem cây nh? phân có ph?i là m?t cây hoàn h?o hay không (perfect tree)? M?t cây nh? phân ???c g?i là cây hoàn h?o n?u t?t c? các node trung gian c?a nó ??u có hai node con và t?t c? các node lá ??u có cùng m?t m?c.
      Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 2 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
      Ví d?:
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
CÂY NH? PHÂN B?NG NHAU
Bài làm t?t nh?t
Cho hai cây nh? phân, nhi?m v? c?a b?n là ki?m tra xem cây nh? phân có gi?ng nhau hay không?
    Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái c?a m?i cây; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
      Ví d?:
Input	Output
2
2
1 2 L 1 3 R
2
1 2 L 1 3 R
2
1 2 L 1 3 R
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
T?NG NODE LÁ BÊN PH?I
Bài làm t?t nh?t
Cho cây nh? phân, nhi?m v? c?a b?n là tính t?ng c?a t?t c? các node lá bên ph?i trên cây? Ví d? v?i cây d??i ?ây ta có k?t qu? là 2.
 
 
     Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
      Ví d?:
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
Bài làm t?t nh?t
Cho cây nh? phân có giá tr? m?i node là m?t s?, nhi?m v? c?a b?n là tìm t?ng l?n nh?t t? m?t node lá này sang m?t node lá khác? Ví d? v?i cây d??i ?ây ta có t?ng l?n nh?t là 27.
 
     Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
      Ví d?:
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
 BI?N ??I SANG CÂY NH? PHÂN TÌM KI?M
Bài làm t?t nh?t
Cho cây nh? phân, nhi?m v? c?a b?n là d?ch chuy?n cây nh? phân thành cây nh? phân tìm ki?m. Phép d?ch chuy?n ph?i b?o toàn ???c c?u trúc cây nh? phân ban ??u. Ví d? d??i ?ây s? minh h?a phép d?ch chuy?n:
 
    Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m 3 dòng: dòng ??u tiên ??a vào s? N là s? l??ng c?nh c?a cây; dòng ti?p theo ??a vào N b? ba (u, v, x), trong ?ó u là node cha, v là node con, x= R n?u v là con ph?i, x=L n?u v là con trái; u, v, x ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, u, v, th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?u, v?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng là phép duy?t Inorder c?a cây tìm ki?m.
     Ví d?:
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
XÂY D?NG L?I CÂY NH? PHÂN TÌM KI?M
Bài làm t?t nh?t
Cho m?t m?ng là phép duy?t level-order c?a cây nh? phân tìm ki?m. Nhi?m v? c?a b?n là xây d?ng l?i cây nh? phân tìm ki?m b?o toàn ???c c?u trúc cây nh? phân ban ??u.
     Input:
?	Dòng ??u tiên ??a vào s? l??ng test T.
?	Nh?ng dòng ti?p theo ??a vào các b? test. M?i b? test g?m dòng: dòng ??u tiên ??a vào s? N là s? l??ng node c?a cây tìm ki?m; dòng ti?p theo ??a vào phép duy?t level-order c?a cây tìm ki?m; các s? ???c vi?t cách nhau m?t vài kho?ng tr?ng.
?	T, N, node th?a mãn ràng bu?c: 1?T?100; 1?N?103; 1?node?104;
Output:
?	??a ra k?t qu? m?i test theo t?ng dòng là phép duy?t tr??c (preOrder) c?a cây tìm ki?m.
      Ví d?:
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
NODE LÁ C?A CÂY NH? PHÂN TÌM KI?M
Bài làm t?t nh?t
Cho dãy s? g?m N s? là phép duy?t theo th? t? tr??c (Preorder) c?a m?t cây nh? phân tìm ki?m. Hãy in ra t?t c? các node lá c?a cây ?
Ví d? v?i dãy A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duy?t cây theo th? t? tr??c s? cho ta k?t qu?: 15, 23, 28, 33, 38, 45.                                           
    Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T (T?100).
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test g?m 2 dòng: dòng th? nh?t là s? t? nhiên N (N?1000). Dòng ti?p theo là N s? là phép duy?t theo th? t? tr??c c?a cây BST.
   Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
   Ví d?:
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

NODE TRUNG GIAN C?A CÂY NH? PHÂN TÌM KI?M
Bài làm t?t nh?t
Cho dãy s? g?m N s? là phép duy?t theo th? t? tr??c (Preorder) c?a m?t cây nh? phân tìm ki?m. Hãy ??a ra s? các node trung gian c?a cây ?
Ví d? v?i dãy A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duy?t cây theo th? t? tr??c s? cho ta k?t qu? là 5 bao g?m các node: 30, 20, 25, 40, 35.                     
     Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T (T?100).
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test g?m 2 dòng: dòng th? nh?t là s? t? nhiên N (N?1000). Dòng ti?p theo là N s? là phép duy?t theo th? t? tr??c c?a cây BST.
     Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
    Ví d?:
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
?? SÂU CÂY NH? PHÂN TÌM KI?M
Bài làm t?t nh?t
Cho dãy s? g?m N s? là phép duy?t theo th? t? tr??c (Preorder) c?a m?t cây nh? phân tìm ki?m. Hãy tìm ?? sâu c?a cây ?
Ví d? v?i dãy A[] = {30, 20, 15, 25, 23, 28, 40, 35, 33, 38, 45} là phép duy?t cây theo th? t? tr??c s? cho ta k?t qu? là 3.                                                  
     Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T (T?100).
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test g?m 2 dòng: dòng th? nh?t là s? t? nhiên N (N?1000). Dòng ti?p theo là N s? là phép duy?t theo th? t? tr??c c?a cây BST.
    Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
    Ví d?:
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

 CÂY NH? PHÂN TÌM KI?M CÂN B?NG 1
Bài làm t?t nh?t
Hãy xây d?ng m?t cây nh? phân tìm ki?m cân b?ng t? dãy s? A[] =(a0, a1, .., an-1}. ??a ra n?i dung node g?c c?a cây tìm ki?m cân b?ng.  Ví d? v?i dãy A[]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta s? có cây nh? phân tìm ki?m cân b?ng v?i node g?c là 33.
     Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T (T?100).
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test g?m 2 dòng: dòng th? nh?t là s? t? nhiên N (N?106). Dòng ti?p theo là N s? c?a m?ng A[].
     Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
     Ví d?:
Input	Output
2
11
40  28  45 38  33  15  25  20  23  35  30
10
1  2  3  4  5  6  7  8  9  10	30
5
 


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
 CÂY NH? PHÂN TÌM KI?M CÂN B?NG 2
Bài làm t?t nh?t
Hãy xây d?ng m?t cây nh? phân tìm ki?m cân b?ng t? dãy s? A[] =(a0, a1, .., an-1}. ??a ra phép duy?t theo th? t? tr??c (preorder) c?a cây tìm ki?m cân b?ng.  Ví d? v?i dãy A[]={40, 28, 45, 38, 33, 15, 25, 20, 23, 35, 30} ta s? có phép duy?t theo th? t? tr??c c?a cây nh? phân tìm ki?m cân b?ng v?i node g?c là 33 : 33, 25, 20, 15, 23, 28, 30, 40, 38, 35, 45.
     Input:
?	Dòng ??u tiên ??a vào s? l??ng b? test T (T?100).
?	Nh?ng dòng k? ti?p ??a vào T b? test. M?i b? test g?m 2 dòng: dòng th? nh?t là s? t? nhiên N (N?106). Dòng ti?p theo là N s? c?a m?ng A[].
     Output:
?	??a ra k?t qu? m?i test theo t?ng dòng.
     Ví d?:
Input	Output
2
11
40  28  45 38  33  15  25  20  23  35  30
10
1  2  3  4  5  6  7  8  9  10	30 23 15 20 25 28 38 33 35 40 45
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

