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
/*
        my approach:
                   >make it a circular link list using last node next point to head
                   >mark the no of nodes and breas the nth node.
                   >
                   >
*/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head||!head->next||k==0) return head;
        ListNode*cur=head;
        int len=1;
        while(cur->next&&++len)
        {
            cur =cur->next;
        }
        cur->next=head;
        k=k%len;
        k=len-k;
        while(k--)
            cur=cur->next;
        head=cur->next;
        cur->next=NULL;
            return head;
        
    }
};
