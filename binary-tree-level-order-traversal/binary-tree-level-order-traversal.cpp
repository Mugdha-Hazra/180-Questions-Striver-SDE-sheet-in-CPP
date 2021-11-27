class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        if (root != nullptr) {
            queue<TreeNode*> q;
            q.push(root);
            while (q.size() != 0) {
                int levelSize = q.size();
                vector<int> values;
                for (int i = 0; i < levelSize; i++) {
                    TreeNode* node = q.front();
                    values.push_back(node->val);
                    if (node->left !=NULL) q.push(node->left);
                    if (node->right !=NULL)q.push(node->right);
                   q.pop();
                }
                output.push_back(values);
            }
        }
        return output;
        
    }
};