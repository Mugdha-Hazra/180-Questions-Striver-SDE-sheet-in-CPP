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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(INT_MIN);
        ListNode *head = &ans;
        int carry = 0;
		// repeat the loop till either l1 is NULL or l2 is NULL or carry is greater than 0
        while(l1 != nullptr || l2 != nullptr || carry != 0) {
            int a, b;
            if(l1 != nullptr) {a = l1->val; l1 = l1->next;}
            else a = 0;
            if(l2 != nullptr) {b = l2->val; l2 = l2->next;}
            else b = 0;
            ListNode *temp = new ListNode((a + b + carry) % 10);
            carry = (a + b + carry) / 10;
            head->next = temp;
            head = head->next;
            
        }
        return ans.next;
    }
};
