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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->next==NULL && l2->next==NULL) {
            int sum = l1->val + l2->val;
            l1->val = (sum)%10;

            if(sum>9){
                ListNode* q = new ListNode((sum)/10);
                l1->next=q;
            }
            return l1;
        }

        //for answer
        // ListNode * p = new ListNode();
        ListNode* head=NULL;
        ListNode* r = head;

        int carry=0;

        while(l1!=NULL || l2!=NULL){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            carry = sum/10;
            if(head==NULL){
                ListNode * p = new ListNode(sum%10);
                head=p;
                r=p;
            }
            else{
                ListNode* q = new ListNode(sum%10);
                r->next=q;
                r=q;
                cout<<q->val<<" "<<endl;
            }
        }

        if(carry>0){
            ListNode* q = new ListNode(carry);
            r->next=q;
        }

        ListNode* t = head;
        while(t!=NULL){
            cout<<t->val<<" ";
            t=t->next;
        }

        return head;
    }
};