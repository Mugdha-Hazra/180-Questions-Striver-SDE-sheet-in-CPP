/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
   public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return (!root) ? " #" : " " + to_string(root->val) + 
                                                   serialize(root->left) + serialize(root->right);
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream s(data);
        return buildTree(s);
    }

   private:
    TreeNode* buildTree(istringstream& str) {
        string s;
        str >> s;
        if (s == "#") return NULL;
        TreeNode* node = new TreeNode(stoi(s));
        node->left = buildTree(str);
        node->right = buildTree(str);
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));