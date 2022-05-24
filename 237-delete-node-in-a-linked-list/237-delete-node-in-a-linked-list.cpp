/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {   // ListNode *p=node, *q=p->next;
        //p->val = q->val;
        //p->next = q->next;
        //delete q;
         *node = *node->next;
    }
};