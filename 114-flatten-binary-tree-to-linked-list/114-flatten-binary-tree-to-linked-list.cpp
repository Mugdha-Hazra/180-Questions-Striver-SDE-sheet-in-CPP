/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  TreeNode* prev=nullptr; 
public:
    void flatten(TreeNode* root){
        preorder(root);
      
    }
     
  void preorder(TreeNode* root){
    
    if(!root)
      return;
  
    TreeNode* l=root->left;
    TreeNode* r=root->right;
    
    if(prev==nullptr)
       prev=root;
    else{
      prev->right=root;
      prev->left=nullptr;
      prev=root;
    }
    
     preorder(l);
    preorder(r);
    
    }
};