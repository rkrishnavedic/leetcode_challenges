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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode *odd =head;
        if(odd->next==NULL){return head;}
        ListNode* even=head->next;
        ListNode* ask=head->next;
        while(even!=NULL){
            odd->next=even->next;
            
            if(odd->next==NULL) break;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        if(even!=NULL) even->next=NULL;
        odd->next=ask;
        
        return head;
    }
};
