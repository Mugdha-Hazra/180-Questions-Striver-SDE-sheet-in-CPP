/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        for(int i=0;i<k;i++){ // for checking if that many nodes exists
            if(!temp)return head;
            temp=temp->next;
        }
        
        ListNode *prev=NULL;
        ListNode *nex1=NULL;
        temp=head;
        for(int i=0;i<k;i++){// for reversing the k parts wih oyr naive approach
            nex1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nex1;
        }
        if(nex1!=NULL)
            head->next=reverseKGroup(nex1,k);//head k next me dal dege jo bhi recursive function hume return karega
        return prev;
        
    }
};
