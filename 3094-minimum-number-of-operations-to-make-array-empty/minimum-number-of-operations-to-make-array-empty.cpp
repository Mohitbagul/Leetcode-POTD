class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        for(auto it : mp){
            if(it.second==1) return -1;
            if(it.second%3 == 1){
                int a = it.second-4;
                cnt+=(a/3);
                cnt+=2;
            }
            else if(it.second%3 == 2){
                int a = it.second-2;
                cnt+=(it.second/3);
                cnt+=1;
            }
            else {
                cnt+=(it.second/3);
            }
        }
        return cnt;
    }
};