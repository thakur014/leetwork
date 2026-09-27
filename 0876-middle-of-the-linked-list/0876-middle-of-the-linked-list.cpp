
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=nullptr and fast->next!=0){
            slow=slow->next;
            fast=fast->next->next;
        }
return slow;
        
        
    }
};