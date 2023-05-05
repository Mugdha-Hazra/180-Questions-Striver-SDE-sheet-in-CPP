//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
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
    Node *root = new Node(stoi(ip[0]));
        
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

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
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
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    unordered_map<int,int> help(Node* root,int k,int &ans)// ans by refrence jaegha just like a glovbal value sary recursive function ans update krdy ren gy
    {
        unordered_map<int,int> parentTkWala;
        unordered_map<int,int> leftChildKa;
        unordered_map<int,int> rightChildKa;
        //no left child if ch nhi jauga
        if(root->left)
        leftChildKa=help(root->left,k,ans);
        if(root->right)//no right child if ch nhi jauga
        rightChildKa=help(root->right,k,ans);
        //agar left/right da size child map ch k ton jada distinct elemnts hein
       /* if(leftChildKa.size()>k)//parent mad ch add karan di koi liod ni size tan veese hi  >k lod  ni
        return leftChildKa;
        if(rightChildKa.size()>k)
        return rightChildKa;
        */
        
        parentTkWala[root->data]++; //if 2-->4 then do 2-->5
        for(auto x:leftChildKa)
        parentTkWala[x.first]+=x.second;
        for(auto x:rightChildKa)
        parentTkWala[x.first]+=x.second;
        //is point tk sad paren t map ch left right map merge hogy ny 
        //agar is parent map da size <=k ans++ kardo g cuz is root tkk da subtree good Subtree haui
        if(parentTkWala.size()<=k)
        ans++;
        return parentTkWala;//cuz at the end asi tann parent da map return krda hai g
        
    }

    int goodSubtrees(Node *root,int k){
        // Code here
        int ans=0;
        help(root,k,ans);//root pointer and k and ans by referce since ans har function jeda recursively call hoya
        //oho abs ch add 1 krega
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(i==0){
            string s;
            getline(cin,s);
        }
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        string newline;
        getline(cin,newline);
        Node* root = buildTree(str);
        Solution ob;
        cout<<ob.goodSubtrees(root,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends