/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
     Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        Node* temp=head;
        
        //creates mapping of cloned list using original list
        while(temp)
        {
            Node* newNode= new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=newNode->next;
            
        }
        
        //assigning random pointers
        temp=head;
        while(temp)
        {
            if(temp->random)
            {
               temp->next->random= temp->random->next;   
            }
            temp=temp->next->next;
        }
        
        //restore the original linked list
        Node* newHead= head->next;
        Node* temp2=head->next;
        temp=head;
        
        while(temp  && temp2)
        {
            Node* currN=temp2->next;
            temp->next=currN;
            if(currN)
            {
                temp2->next=currN->next;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        
        return newHead;
    }
};
