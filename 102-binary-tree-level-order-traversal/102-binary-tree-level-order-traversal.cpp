class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if (root) {
            queue<TreeNode*> q;
            q.push(root);
            while (!q.empty()) 
            {
                int s = q.size();
                vector<int> values;
                for (int i = 0; i < s; i++)
                {   TreeNode* node = q.front();
                    values.push_back(node->val);
                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);
                   q.pop();
                }
                v.push_back(values);
            }
        }
        return v;
        
    }
};