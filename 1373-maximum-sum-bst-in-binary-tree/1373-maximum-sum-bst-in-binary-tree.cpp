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
    
    pair<int,pair<int,int>> func(TreeNode* node, int & ans){
        if(!node) return {0,{INT_MAX,INT_MIN}};
        auto l= func(node->left,ans);
        auto r= func(node->right,ans);
        if(r.second.first<=node->val || l.second.second>= node->val) return {0,{INT_MIN,INT_MAX}};
        int num= l.first+ r.first + node->val;
        ans=max(ans,num);
        return {num,{min(node->val,l.second.first),max(node->val,r.second.second)}};
}
    
public:
    int maxSumBST(TreeNode* root) {
        int ans=0;
        func(root,ans);
        return ans;
    }
};