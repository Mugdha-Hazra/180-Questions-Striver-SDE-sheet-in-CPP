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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    { return (p->val < root->val && q->val < root->val) ? lowestCommonAncestor(root->left, p, q) : 
        (p->val > root->val && q->val > root->val) ? lowestCommonAncestor(root->right, p, q): root;
    }
};