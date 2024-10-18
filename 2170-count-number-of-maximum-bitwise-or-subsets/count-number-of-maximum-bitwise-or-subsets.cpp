class Solution {
public:
    void solve(int &ans,int i,vector<int>& nums,int cnt,int target){

        if(i == nums.size()){

            if(cnt == target){
                ans++;
            }

            return;
        }

        solve(ans,i+1,nums,cnt|nums[i],target);
        solve(ans,i+1,nums,cnt,target);
    }

    int countMaxOrSubsets(vector<int>& nums) {

        int target=0,ans=0,i=0,cnt=0;

        for(int i=0;i<nums.size();i++){
            target |= nums[i];
        }
       
        solve(ans,i,nums,cnt,target);
        
        return ans;
    }
};