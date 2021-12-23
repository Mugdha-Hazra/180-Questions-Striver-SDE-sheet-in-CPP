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
    vector<int>v;
    int i=0;
    void find(TreeNode*root)
    {
        if(root==NULL)
        {
            return ;
        }
        find(root->left);
        v.push_back(root->val);
        find(root->right);
    }
    void check(TreeNode*root)
    {
        if(root==NULL)
        {
            return ;
        }
        check(root->left);
         root->val=v[i++];
        check(root->right);
    }
    void recoverTree(TreeNode* root)
    {
        find(root);
        sort(v.begin(),v.end());
        check(root);
    }
};