class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        int i=0,j=0,num=0,a=0;

        while(j<nums.size()){
            mp[nums[j]]++;

            while(mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }

            num = max(num,j-i+1);
            j++;
        }
        
        return num;
    }
};