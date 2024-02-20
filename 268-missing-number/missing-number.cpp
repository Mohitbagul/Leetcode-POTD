class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        vector<int>arr1(n,0);
        for(int i=0;i<nums.size();i++){
            arr1[nums[i]]=1;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(arr1[i]==0) return i;
        }
        return 0;
    }
};