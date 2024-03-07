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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode * a=head;
        while(a!=NULL){
            n++;
            a=a->next;
        }

        n=(n/2)+1;
        a=head;

        for(int i=0;i<n-1;i++){
            a=a->next;
        }
        return a;
    }
};