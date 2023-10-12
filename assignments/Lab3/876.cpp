class Solution {
public:
    int Last(ListNode* head){
        int a=1;
        ListNode * temp=head;
        while(head && head->next){
            a++;
            head=head->next;
        }
        return a;
    }
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        if(head->next->next==NULL){
            return head->next;
        }
        ListNode* temp=head;
        int l=Last(head);
        l=l/2;
        if(l%2==0){
            while(l){
                head=head->next;
                l--;
            }
            return head;
        }
        else{
            while(l){
                head=head->next;
                l--;
            }
        }
        return head;
    }
};