class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if(head->val >= 5){
            ListNode* newNode = new ListNode(0);
            newNode->next = head;
            head = newNode;
        }
        ListNode* curr = head;
        while(curr){
            curr->val = (curr->val * 2)%10;
            if(curr->next != NULL && curr->next->val >= 5) {
                curr->val += 1;
            }
            curr = curr->next;
        }
        return head;
    }
};