class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=0;
        for(auto it:mp){
            if(it.second>n){
                n=it.second;
            }
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second==n){
                cnt+=it.second;
            }
        }
        return cnt;
    }
};