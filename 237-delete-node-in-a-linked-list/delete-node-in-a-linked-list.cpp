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
        ListNode *p;
        while(node->next!=NULL){
            p=node;
            node->val=node->next->val;
            node=node->next;
        }
        p->next=NULL;
    }
};