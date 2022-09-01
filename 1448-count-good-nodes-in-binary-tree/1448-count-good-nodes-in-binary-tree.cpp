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
    
    int solve(TreeNode* root,int hi){
        if (root){
            int k=solve(root->left, max(hi,root->val)) + solve(root->right, max(hi,root->val));
            if (root->val>=hi){
                k++;
            }
            return k;
        }
        return 0;
    }
    int goodNodes(TreeNode* root) {
        return solve(root,-10001);
    }
};