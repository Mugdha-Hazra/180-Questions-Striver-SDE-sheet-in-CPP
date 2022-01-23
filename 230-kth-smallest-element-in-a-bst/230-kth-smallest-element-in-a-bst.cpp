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
    void inord(TreeNode*root,int &k,int &ans){
        if(root==NULL)
            return;
        inord(root->left,k,ans);
        k--;
        if(k==0){
            ans=root->val;
            
        }
        inord(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
       int ans=-1;
        inord(root,k,ans);
        return ans;
    }
};