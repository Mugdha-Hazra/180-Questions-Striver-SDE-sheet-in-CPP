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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s=new ListNode();//constructing an another linklist
        s->next=head; //assigning its next to head
        ListNode*p=s,*q=s; //rest all is the game of slow and fast pointer
        for(int i=0;i<n;i++)
        p=p->next;
        while(p->next!=NULL)
        {   p=p->next;
            q=q->next;
        }
        q->next=q->next->next;
        return s->next;
    }
};