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
    void solve(TreeNode *root, int k)
    {
        if(!root)
            return;
        if(k < root->val && root->left == NULL)
            root->left = new TreeNode(k);
        if(k > root->val && root->right == NULL)
            root->right = new TreeNode(k);
        if(k < root->val)
            solve(root->left, k);
        if(k > root->val)
            solve(root->right, k);
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        
        if(pre.size() == 1)
            return new TreeNode(pre[0]);
        
        TreeNode *root = new TreeNode(pre[0]);
        for(int i=1 ; i<pre.size() ; i++)
            solve(root, pre[i]);
        
        return root;
    }
};