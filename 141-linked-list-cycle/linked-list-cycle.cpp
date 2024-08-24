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
    bool hasCycle(ListNode *head) {
        ListNode*first=head;
        ListNode*second=head;

        while(second!=NULL && second->next!=NULL){
            if(second->val==INT_MAX) return true;
            first->val = INT_MAX;
            second=second->next->next;
            first=first->next;
        }
        return false;
    }
};