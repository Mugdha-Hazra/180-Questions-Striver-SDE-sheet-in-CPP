//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
   Node *compute(Node *head)
    {
        // your code goes here
        Node*t=head;
        vector<int>a,ans;
        stack<int>s;
        while(t!=NULL)
        {
            ans.emplace_back(t->data);
            t=t->next;
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            while(!s.empty() and s.top()<=ans[i])
                s.pop();
            if(s.empty())
                a.emplace_back(-1);
            else
                a.emplace_back(s.top());
            s.push(ans[i]);
        }
        reverse(a.begin(),a.end());
        head=t=NULL;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==-1)
            {
                Node* newnode=new Node(ans[i]);
                if(head==NULL)
                    head=t=newnode;
                else
                {
                    t->next=newnode;
                    t=newnode;
                }
            }
        }
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends