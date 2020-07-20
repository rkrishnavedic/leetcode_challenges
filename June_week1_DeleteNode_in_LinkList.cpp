/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * head, * nxt;
        head=node;
       nxt=node->next;
        while(nxt->next!=NULL){
            head->val=nxt->val;
            head=head->next;
            nxt=nxt->next;
        }
        head->val=nxt->val;
        head->next=NULL;
    }
};
