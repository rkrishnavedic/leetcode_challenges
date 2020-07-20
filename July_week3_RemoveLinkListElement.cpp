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
    ListNode* removeElements(ListNode* prime, int val) {
        
        if(prime==NULL) return prime;
        
        if(prime->val==val) return removeElements(prime->next,val);
       ListNode *prev=prime;
       ListNode * head=prime->next;
        
       while(head!=NULL){
           if(head->val==val){
               prev->next=head->next;
               head=head->next;
           }else{
               prev=head;
               head=head->next;
           }
       }
     prev->next=NULL;
        return prime;
    }
};
