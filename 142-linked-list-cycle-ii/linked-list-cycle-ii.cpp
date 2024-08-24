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
    ListNode *detectCycle(ListNode *head) {
        ListNode*first = head;
        ListNode*bef_second=head;
        ListNode*second=head;

        ListNode* find = NULL;

        while(second!=NULL && second->next!=NULL){
            if(bef_second->val==INT_MAX) {
                return bef_second;
            }
            if(second->val==INT_MAX) {
                return second;
            }
            first->val=INT_MAX;
            first=first->next;
            bef_second = second->next;
            second = second->next->next; 
        }

        return NULL;
    }
};