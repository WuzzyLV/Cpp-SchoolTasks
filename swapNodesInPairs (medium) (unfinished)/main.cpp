  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* root=head->next;
        ListNode* temp;
        ListNode* curr=head;
        while (curr->next!=nullptr){
            temp=head->next;
            curr->next=temp->next;
            temp->next=curr;
            
            curr=curr->next;
        }
        return root;
    }
};

// 1 > 2 > 3 >4
// 2 > 1