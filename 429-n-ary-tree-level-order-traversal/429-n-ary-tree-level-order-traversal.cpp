/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root){
            return {};
        }
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int si=q.size();
            vector<int> temp_ans;
            while(si--){
                auto temp=q.front();
                q.pop();
                temp_ans.push_back(temp->val);
                vector<Node*> v=temp->children;
                for(int i=0;i<v.size();i++){
                    if(v[i]){
                        q.push(v[i]);
                    }
                }
            }
            ans.push_back(temp_ans);
        }
        return ans;
    }
};