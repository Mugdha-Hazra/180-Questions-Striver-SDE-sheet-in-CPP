//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
  struct Node* modifyTheList(struct Node *head)
    {
     vector<int> v;
     while(head){
         v.push_back(head->data);
         head=head->next;
     }
     int left=0,right=v.size()-1;
     while(left<right){
         int temp=v[left];
         v[left]=v[right]-v[left];
         v[right]=temp;
         left++;
         right--;
     }
     struct Node * l1=new Node(v[0]);
     struct Node * ans=l1;
     for(int i=1;i<v.size();i++){
         struct Node *next=new Node(v[i]);
         l1->next=next;
         l1=l1->next;
     }
     return ans;
    }

 
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends