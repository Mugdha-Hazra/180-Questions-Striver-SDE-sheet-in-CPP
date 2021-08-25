/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
 My approach
            >using fast and slow pointer find the intersection point of fast and slow
            >after make a dummy pointer and slow pointer start moving it from front till it collide with slow 
*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
       if(head==NULL||head->next==NULL)
           return NULL;
        ListNode *slow=head,*fast=head,*entry=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=entry)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};
