class Solution {
public:
    void solve(unordered_map<int,int>&mp,int i,vector<int>& nums,int cnt){

        if(i == nums.size()){
            mp[cnt]++;
            return;
        }

        solve(mp,i+1,nums,cnt|nums[i]);
        solve(mp,i+1,nums,cnt);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0,cnt=0;
        solve(mp,i,nums,cnt);
        int n=INT_MIN,ans=0;
        for(auto it:mp){
            if(it.first>n){
                n=it.first;
                ans = it.second;
            }
        }
        return ans;
    }
};