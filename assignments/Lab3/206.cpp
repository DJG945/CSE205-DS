class Solution {
public:
    ListNode* Reverse(ListNode* &head){
        ListNode* l=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=l;
            l=curr;
            curr=temp;
        }
        return l;
    }
    ListNode* reverseList(ListNode* head) {
        return Reverse(head);
    }
};