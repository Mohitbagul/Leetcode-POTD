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

private:
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        if(b==a) return a;

        if(a>b) 
        return gcd(a-b,b);
        return gcd(a,b-a);
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p = head;
        ListNode* q = p->next;

        while(q!=NULL){
            ListNode* r = new ListNode();
            r->val = gcd(p->val,q->val);
            p->next=r;
            r->next=q;

            p=q;
            q=q->next;
        }
        return head;
    }
};