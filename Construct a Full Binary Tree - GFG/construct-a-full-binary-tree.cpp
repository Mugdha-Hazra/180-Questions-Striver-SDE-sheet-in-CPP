//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


// } Driver Code Ends
/* Structre of the Node of the Binary Tree is as follows
struct Node
{
        int data;
        struct Node *left, *right;
};
*/
// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
   int idx=0;
   Node*sol(int pre[],int preMirror[],int n,int l,int u)
   {
       if(l>u||idx>=n)
       return NULL;
       
       Node*root=new Node(pre[idx]);
       idx++;
       int index;
       for(int i=l;i<=u;i++)
       {
           if(preMirror[i]==pre[idx])
           {
               index=i;
               break;
           }
       }
       if(l==u)
       return root;
       
       if(index<=u&&index>=l)
       {
       root->left=sol(pre,preMirror,n,index,u);
       root->right=sol(pre,preMirror,n,l,index-1);
       }
       
       return root;
   }
    Node* constructBinaryTree(int pre[], int preMirror[], int n)
    {
        int l=0,u=n-1;
        idx=0;
        return sol(pre,preMirror,n,l,u);
    }
};

//{ Driver Code Starts.

void printInorder(Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int preOrder[n];
	    int preOrderMirror[n];
	    for(int i=0; i<n; i++)cin>>preOrder[i];
	    for(int i=0; i<n; i++)cin>>preOrderMirror[i];
	    Solution obj;
	    printInorder(obj.constructBinaryTree(preOrder, preOrderMirror, n));
	    cout<<endl;
    }
	return 0;
}
// } Driver Code Ends