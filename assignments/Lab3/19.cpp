class Solution {
private:
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head, *ahead;

        while(curr){
            ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
        }
        return prev;
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* flip = rev(head);
        ListNode* temp = flip;
        if(n == 1)  return rev(flip->next);
        for(int i=0; i<n-2; i++){
            flip = flip->next;
        }
        flip->next = flip->next->next;
        return rev(temp);
    }
};