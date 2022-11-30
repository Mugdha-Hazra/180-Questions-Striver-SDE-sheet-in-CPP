//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
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

    Node *getMiddleNode(Node *head){

        Node *fast=head,*slow=head;

        while(fast != NULL && fast->next!=NULL){

            slow=slow->next;

            fast=fast->next->next;

        }

        Node *head2=slow->next;

        slow->next=NULL;

        return head2;

    }

    Node *reverseNode(Node *head2){

        Node *curr=head2,*prev=NULL,*next;

        while(curr!=NULL){

            next=curr->next;

            curr->next=prev;

            prev=curr;

            curr=next;

        }

        return prev;

    }

    Node *merge(Node *head,Node *head2){

        Node *curr=head;

        while(head2!=NULL){

            Node *temp=curr->next;

            curr->next=head2;

            head2=head2->next;

            curr=curr->next;

            curr->next=temp;

            curr=curr->next;

        }

        return head;

        

    }

    Node *reorderList(Node* head) {

        Node *head2=getMiddleNode(head);

        head2=reverseNode(head2);

        head=merge(head,head2);

        return head;

    }

};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends