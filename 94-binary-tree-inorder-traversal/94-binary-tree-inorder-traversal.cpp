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
//morris method
class Solution {
public:
    vector<int>v;
    vector<int> inorderTraversal(TreeNode* root) 
    {if(!root)return v;
        TreeNode*curr=root;
        while(curr)
        {
            if(curr->left)
            {
                TreeNode*temp=curr->left;
                TreeNode*leftpointer=curr->left;
                while(temp->right)
                temp=temp->right;
               temp->right=curr;
                curr->left=NULL;
                curr=leftpointer;
            }
            else{
                v.push_back(curr->val);curr=curr->right;
            }
        }
        return v;
     }
};