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
        for(int i=0;i<k;i++){
            if(!temp)return head;
            temp=temp->next;
        }
        
        ListNode *prev=NULL;
        ListNode *nex1=NULL;
        temp=head;
        for(int i=0;i<k;i++){
            nex1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nex1;
        }
        if(nex1!=NULL)
            head->next=reverseKGroup(nex1,k);
        return prev;
        
    }
};
