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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++) mp[nums[i]]=1;

        ListNode *q=head,*r=head;

        while(r!=NULL){
            if(mp[r->val]==1){
                if(r==head){
                    head=head->next;
                    q=r=head;
                }
                else{
                    r=r->next;
                    q->next=r;
                } 
            }
            else{
                q=r;
                r=r->next;
            }
        }
        return head;
    }
};