/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   TreeNode* res;
   int rec(TreeNode* root,TreeNode* p,TreeNode* q){
        if(!root)return 0;
        int x=0;
        if(root==p||root==q)x++;
        if(rec(root->left,p,q))x++;
        if(rec(root->right,p,q))x++;
        if(x==2)res=root;
        if(root->left==p||root->right==p)x++;
        if(root->right==q||root->left==q)x++;
        return x;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        rec(root,p,q);
        return res;
    }
};