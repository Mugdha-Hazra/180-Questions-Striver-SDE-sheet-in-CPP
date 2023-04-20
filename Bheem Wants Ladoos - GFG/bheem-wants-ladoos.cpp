//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/



class Solution{

    public:
     int ladoos(Node* root, int home, int k)
    {
        unordered_map<Node*,Node*>mp;
        
        queue<Node*>q;
        q.push(root);
        Node* findd;
        while(!q.empty())
        {
            int t=q.size();
            while(t--)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->data==home)
                {
                    findd=temp;
                }
                
                if(temp->left)
                {
                    q.push(temp->left);
                    mp[temp->left]=temp;
                }
                if(temp->right)
                {
                    q.push(temp->right);
                    mp[temp->right]=temp;
                }
                
            }
            
        }
        queue<pair<Node*,int>>qp;
        qp.push({findd,0});
        
        map<Node*,bool>vis;
        int sum=0;
        
        while(!qp.empty())
        {
             int t=qp.size();
             
             while(t--)
             {
                 Node* temp=qp.front().first;
                 int steps=qp.front().second;
                 qp.pop();
                 if(steps>k)continue;
                
                 sum+=temp->data;
              //   cout<<temp->data<<" ";
                 
                 if(mp.find(temp)!=mp.end() and vis.find(temp)==vis.end() )
                 {
                     Node* extra=mp[temp];
                     if(vis.find(extra)==vis.end()) qp.push({extra,steps+1});
                    
                 }
                
                if(temp->left and vis.find(temp)==vis.end()  and vis.find(temp->left)==vis.end())
                {
                    qp.push({temp->left,steps+1});
                }
                
                if(temp->right and vis.find(temp)==vis.end() and vis.find(temp->right)==vis.end())
                {
                    qp.push({temp->right,steps+1});
                }
                
                 vis[temp]=true;
                 
             }
            // cout<<endl;
             
        }
        
        return sum;
        
        
        
    }

 


};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int home,k;
        cin>> home >> k;
        getchar();
        Solution obj;
        cout<< obj.ladoos(root,home,k) << endl;
    }
	return 0;
}


// } Driver Code Ends