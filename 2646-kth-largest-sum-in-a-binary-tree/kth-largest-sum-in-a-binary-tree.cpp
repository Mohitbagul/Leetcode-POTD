/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long ,vector<long long>,greater<long long>>pq;

        queue<TreeNode*>q;

        q.push(root);

        long long sum=0;

        while(!q.empty()){
            
            long long n = q.size();

            for(long long i=0 ; i<n ; i++){
                TreeNode* node = q.front();
                q.pop();

                sum+=node->val;
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

            if(pq.size()<k){
                pq.push(sum);
            }
            else if(pq.top()<sum){
                pq.pop();
                pq.push(sum);
            }

            sum=0;
            
        }

        if(pq.size()==k)
        return pq.top();
        else{
            return -1;
        }
    }
};