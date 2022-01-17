class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) 
    {
        if(!root)return;
        mirror(root->left);
        mirror(root->right);
        swap(root->left,root->right);
        
    }
};
