class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp){
            count++;
            temp = temp->next;
        }

        // Remove head
        if(count == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;

        for(int i = 1; i < count - n; i++){
            temp = temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;

        return head;
    }
};