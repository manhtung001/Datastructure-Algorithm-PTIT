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


