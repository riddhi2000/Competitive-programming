#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

string s="";
 
void pre(TreeNode *t){
    if(t == NULL)
        return;
        
    s += t->val;
    if(t->left == NULL && t->right==NULL)
        return; 
    s+="(";
    pre(t->left);
    s += ")";
    pre(t->right);
 }
 
string tree2str(TreeNode* t) {
       s="";
       pre(t);
       return s; 
}

int main(){
	TreeNode *root= TreeNode(1);
	root->left=TreeNode(2);
	root->right=TreeNode(3);
	root->left->left=TreeNode(4);

	cout << tree2str(root) << endl;
	return 0;
}