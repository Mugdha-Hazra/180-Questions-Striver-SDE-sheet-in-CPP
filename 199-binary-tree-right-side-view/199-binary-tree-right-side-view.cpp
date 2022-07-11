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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        vector<int>v;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();

            for (int i = 1; i <= s; i++)
            {
                auto temp = q.front();
                q.pop();
                if (i == s)
                    v.push_back(temp->val);
                    //cout << temp->value << ": ";

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
        return v;
    }
    
};