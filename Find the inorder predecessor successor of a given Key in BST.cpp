/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findSuc(Node* root, Node*& suc, int key){
    while(root){
            if(key >= root->key) root = root->right;
            else{
                suc = root;
                root= root->left;
            }
        }
}
void findPre(Node* root, Node*& pre, int key){
    while(root){
            if(key <= root->key) root = root->left;
            else{
                pre = root;
                root= root->right;
            }
        }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
findPre(root,pre,key);
findSuc(root,suc,key);

}
/*
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* successor = NULL;
        
        while (root != NULL) {
            
            if (p->val >= root->val) {
                root = root->right;
            } else {
                successor = root;
                root = root->left;
            }
        }
        
        return successor;
    }
};*/
