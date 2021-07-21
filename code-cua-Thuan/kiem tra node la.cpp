#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
}; 
Node *newnode(int x){
	Node *node = new Node();
	node -> data = x;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}
Node *search(Node *Tree,int x){
	if (Tree == NULL || Tree ->data ==x) return Tree;
	Node *Left = search (Tree -> left,x);
	if (Left) return Left;
	Node *Right = search (Tree -> right,x);
	if (Right) return Right;
}
bool checkUtil(Node *root, int level, int *leafLevel)
{
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level;
            return true;
        }
        return (level == *leafLevel);
	}
    return checkUtil(root->left, level + 1, leafLevel) && checkUtil(root->right, level + 1, leafLevel);
}
bool check(Node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while (t--){
			Node* Tree = NULL;
		int n;cin>>n; 
		for  (int i=0;i<n;i++){
			int u, v;
			char x;
			cin>>u>>v>>x;
			if (Tree == NULL) Tree = newnode(u);
			Node* tmp = search(Tree,u);
			if (x == 'L') tmp -> left = newnode(v); 
			if (x == 'R') tmp -> right = newnode (v);
		}
		if (check(Tree)) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
