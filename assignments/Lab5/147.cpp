/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void Swap(ListNode* &temp){
        ListNode* min=temp;
        int mini=INT_MAX;
        ListNode* s=NULL;
        while(min!=NULL){
            if(min->val<mini){
                mini=min->val;
                s=min;
            }
            min=min->next;
        }
        swap(temp->val,s->val);
    }
    ListNode* insertionSortList(ListNode* head) {
        ListNode* s=new ListNode();
        ListNode* temp=head;
        s->next=temp;
        while(temp->next!=NULL){
            Swap(temp);
            temp=temp->next;
        }
        return s->next;
    }
};