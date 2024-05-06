class Solution {
private:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* last = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return last;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);

        int maximum = 0;
        ListNode* prev = NULL;
        ListNode* current = head;

        while (current != NULL) {
            maximum = max(maximum, current->val);

            if (current->val < maximum) {
                prev->next = current->next;
                ListNode* deleted = current;
                current = current->next;
                delete(deleted);
            }

            else {
                prev = current;
                current = current->next;
            }
        }
        
        return reverseList(head);
    }
};
