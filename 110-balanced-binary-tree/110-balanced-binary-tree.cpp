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
public:
    bool f;
    bool isBalanced(TreeNode* root) 
    {
        f=true;
        height(root);
        return f;
    }
    int height(TreeNode * root)
    {
        if(root==NULL)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1) f=false;
        return (max(l,r)+1);
    }
};