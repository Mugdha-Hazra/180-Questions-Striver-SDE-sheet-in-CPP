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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        if (curr == NULL)
            return curr;

        while (curr)
        {
            while (curr->next && curr->next->val == curr->val)
            {
                ListNode *temp = curr->next;
                curr->next = temp->next;
                temp->next = NULL;
                delete temp;
            }
            curr = curr->next;
        }
        return head;
    }
};