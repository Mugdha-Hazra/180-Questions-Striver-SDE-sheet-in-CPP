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
approach
                 >using fast and slow pointer we'll find the mid point of the linklist
		 >move slow pointer one step forward
		 >make a new temp pointer and start it from the head
		 >check for both slow and temp
		 >retrun true or false accordingly
*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
      
	ListNode *slow = head, *fast = head, *prev = NULL, *tmp;
	while(fast && fast -> next) // finding mid point
		fast = fast -> next -> next,
		tmp = slow -> next, slow -> next = prev, prev = slow, slow = tmp;        
	slow = (fast ? slow -> next : slow); // for odd length case as mentioned above
	while(slow) // check if linked lists starting at prev and slow are equal
		if(slow -> val != prev -> val) return false;
		else slow = slow -> next, prev = prev -> next;
	return true;
      
    }
};
