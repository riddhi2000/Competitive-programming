#include <bits/stdc++.h>
using namespace std;


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 

TreeNode* buildTree(vector<int> preorder, vector<int> &inorder) {
    if(inorder.size() == 0)
        return NULL;
    TreeNode *p,*root;
    root=new TreeNode(preorder[0]);
    vector<TreeNode*> vtn;
    vtn.push_back(root);

    cout << preorder.front() << endl;
    preorder.erase(preorder.begin());
    cout << preorder.front() << endl;
    cout << "------" << endl;
    
    while(true){
        cout << preorder.front() << endl;
        if(vtn.back()->val == inorder.front()){
            p=vtn.back();
            inorder.erase(inorder.begin());
            vtn.pop_back();
            if(inorder.size() == 0)
                break;
            if(vtn.size())
                if(vtn.back()->val == inorder[0])
                    continue;
            p->right=new TreeNode(preorder.front());
            vtn.push_back(p->right);
            preorder.erase(preorder.begin());
            
        }else{
            
            p=new TreeNode(preorder[0]);
            preorder.erase(preorder.begin());
            vtn.back()->left=p;
            vtn.push_back(p);
            
        }
    }
    
    return root;
    
}

 
 TreeNode* F(vector<int> &pre,vector<int> &in,int s,int e,int *p){
     if(s > e)
        return NULL;
    
    TreeNode *root=new TreeNode(pre[*p]);
    (*p)++;
    if(s== e)
        return root;
        
    auto it=find(in.begin(),in.end(),root->val);    
    auto i=it-in.begin();    
        
    root->left=F(pre,in,s,i-1,p);
    root->right=F(pre,in,i+1,e,p);
    
        
    return root;
 }
 

void inorder(TreeNode *t){
    if(t == NULL)
        return;
    inorder(t->left);
    cout << t->val;
    inorder(t->right);
}

int main(){

    vector<int> in;
    vector<int> pre;
    in.push_back(2);
    in.push_back(1);
    in.push_back(3);


    pre.push_back(1);
    pre.push_back(2);
    pre.push_back(3);

    TreeNode* t=buildTree(pre,in);

    inorder(t);
}
