// INTERSECTION OF TWO LINKED LIST
class Solution {
 public:
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* a = headA;
    ListNode* b = headB;

    while (a != b) {
      a = a ? a->next : headB;
      b = b ? b->next : headA;
    }

    return a;
  }
};

// LINKED LIST CYCLE
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};

//LINKED LIST CYCLE 2
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *Slow = head;
        ListNode *Fast = head;
        
        while (Fast != NULL && Fast->next != NULL) {
            Fast = Fast->next->next;
            Slow = Slow->next;
            if (Fast == Slow) { break; }
        }
        
        if (Fast == NULL || Fast->next == NULL) { return NULL; }
        
        Slow = head;
        while (Slow != Fast) {
            Fast = Fast->next;
            Slow = Slow->next;
        }

        return Fast;
        
    }
};

//PALINDROME LINKED LIST 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> start;
        
        while(head!=NULL){
            start.push_back(head->val);
            head=head->next;
        }
        for(int i = 0; i < start.size() / 2; i++){
            if(start[i] != start[start.size() - i - 1]) 
                return false;
        }
        
        return true;
        
    }
};
