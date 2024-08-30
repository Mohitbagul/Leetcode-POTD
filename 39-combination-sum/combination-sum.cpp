class Solution {
public:

    void solve(vector<int>& candidates,int target,int i,int sum,vector<vector<int>>&ans,vector<int>v){
        if(sum>target) return;
        if(sum==target){
            ans.push_back(v);
            return;
        }
        if(i==candidates.size()) return;

        v.push_back(candidates[i]);
        solve(candidates,target,i,sum+candidates[i],ans,v);
        v.pop_back();
        solve(candidates,target,i+1,sum,ans,v);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int i=0;
        int sum=0;
        solve(candidates,target,i,sum,ans,v);
        return ans;
    }
};