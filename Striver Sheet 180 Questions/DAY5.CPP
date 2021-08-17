//Q1. REVERSE LINKED LIST
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next;
        while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
  }
};

//Q2.MIDDLE OF THE LINKED LIST
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    }
};

//Q3.MERGE TWO SORTED LISTS
//IDEA IS TO MERGE THE WHOLE LIST IN ANY ONE OF THE GIVEN LIST. AS FOR EXAMPLE, HERE L1 IS THE FINAL MERGED LIST
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    if (l1->val > l2->val)
      swap(l1, l2);
    l1->next = mergeTwoLists(l1->next, l2);

    return l1;
  }
};
//Q4.REMOVE NTH NODE FROM END OF THE LIST
//FIORST WE FIND THE LENGTH OF THE GIVEN LL, THEN WE ITERATE UNTIL (LINKED_LIST_SIZE - N) TO REMOVE THE NTH NODE
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* iter = head;
        int len=0,i=1;
        
        while(iter){
            iter=iter->next;
            len++;
        }
        if(len==n) return head->next;
        for(iter = head; i < len - n; i++) iter = iter -> next; // iterate first len-n nodes
	    iter -> next = iter -> next -> next;      // remove the nth node from the end
	    return head;
        
    }
};
//Q5.DELETE NODE IN A LINKED LIST
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
	    node->next = node->next->next;
    }
};
//Q6.ADD TWO NUMBERS AS LINKED LIST
class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
      if (l1) {
        carry += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        carry += l2->val;
        l2 = l2->next;
      }
      curr->next = new ListNode(carry % 10);
      carry /= 10;
      curr = curr->next;
    }

    return dummy.next;
  }
};
