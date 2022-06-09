/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        queue<Node*>q;
        Node* prev;
        
        q.push(root);
        while(!q.empty())
        {   
            int sz=q.size();
            bool f=true;
            for(int i=0;i<sz;i++)
            {
              Node*t=q.front();
                q.pop();
                if(f)
                {
                    prev=t;
                    f=false;
                }
                else{
                    prev->next=t;
                    prev=t;
                }
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                
            }
          //  t->next=NULL;
        }
        return root;
    }
};