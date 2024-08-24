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
    bool isPalindrome(ListNode* head) {
        ListNode* first=head,*second=head,*back=head;

        if(head->next==NULL) return true;

        while(1){
            back=first;
            first=first->next;
            second=second->next->next;

            if(second==NULL){
                back->next=NULL;
                back=first;
                break;
            }

            if(second->next==NULL){
                back=first->next;
                first->next=NULL;
                break;
            }
        }

        ListNode* p = back;

        if(back->next!=NULL){
            ListNode* q = back->next;
            ListNode* r = back->next->next;
        

            p->next=NULL;

            while(q!=NULL){
                q->next=p;
                p=q;
                q=r;
                if(r!=NULL)
                r=r->next;
            }
        }

        while(head!=NULL && p!=NULL){
            if(head->val != p->val){
                return false;
            }
            head=head->next;
            p=p->next;
        }
        return true;
    }
};