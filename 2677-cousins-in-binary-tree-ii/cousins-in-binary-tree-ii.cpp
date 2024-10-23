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
    TreeNode* replaceValueInTree(TreeNode* root) {

        root->val=0;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){

            int n = q.size();
            int sum = 0;

            vector<TreeNode*>v;

            for(int i=0;i<n;i++){
                TreeNode *node = q.front();
                q.pop();
                
                v.push_back(node);

                if(node->left){
                    q.push(node->left);
                    sum+=node->left->val;
                }
                if(node->right){
                    q.push(node->right);
                    sum+=node->right->val;
                }
            }

            for(auto it:v){
                int num = sum;

                if(it->left)
                num -= it->left->val;
                if(it->right)
                num -= it->right->val;

                if(it->left)
                it->left->val = num;
                if(it->right)
                it->right->val = num;
            }
            
        }

        return root;
    }
};