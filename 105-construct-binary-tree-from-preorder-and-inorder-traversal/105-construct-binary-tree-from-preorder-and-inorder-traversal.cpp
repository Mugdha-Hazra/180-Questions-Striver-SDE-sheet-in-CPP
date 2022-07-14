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
    private:
    unordered_map<int, int> mp;
    int find_index(int x){
        return mp[x];
    }
    TreeNode * createTree(int start, int end, vector<int>& pre, int &i){
         if(start > end || i == pre.size())
            return NULL;
            TreeNode *temp = new TreeNode(pre[i]);
            int idx = find_index(pre[i]);
            i++;
            temp -> left = createTree( start, idx - 1, pre, i);
            temp -> right = createTree(idx + 1, end, pre, i);
            return temp;
    }
    
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        mp.clear();
        for(int i = 0; i < in.size(); i++){
            mp[in[i]] = i;
        }
        int i = 0;
        return createTree(0, pre.size() - 1, pre, i);
    }
};