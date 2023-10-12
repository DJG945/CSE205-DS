class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ptr=new ListNode();
        ListNode* d=ptr;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                d->next=temp1;
                d=d->next;
                temp1=temp1->next;
            }
            else{
                d->next=temp2;
                d=d->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            d->next=temp1;
            d=d->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            d->next=temp2;
            d=d->next;
            temp2=temp2->next;
        }
        d->next=NULL;
        return ptr->next;
    }
};