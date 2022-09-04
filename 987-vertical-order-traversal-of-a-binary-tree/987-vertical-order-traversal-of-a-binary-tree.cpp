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
    map<int,map<int,multiset<int>>> m;
    void dfs(TreeNode* root,int r,int c){
        if(!root) return;
        m[c][r].insert(root->val);
        dfs(root->left,r + 1,c - 1);
        dfs(root->right,r + 1,c + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> ans;
        for(auto &x:m){
            ans.push_back({});
            for(auto &y:x.second){
                for(int i:y.second) ans.back().push_back(i);
            }
        }
        return ans;
    }
};