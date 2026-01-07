//7th January 2026
//876. Middle of the linked list

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};

//Today was a good day or Guten Tag Me Abodh and Paranjoy was runner up in the competition 
