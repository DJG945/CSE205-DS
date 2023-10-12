class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        if(headA==headB){
            return headA;
        }
        
        while(temp1!=NULL){
            temp2=headB;
            while(temp2!=NULL){
                if(temp1==temp2){
                    return temp1;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        
        return NULL;
    }
};