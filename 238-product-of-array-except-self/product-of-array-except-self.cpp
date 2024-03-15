class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt=nums[0];
        int arr1[nums.size()];
        int arr2[nums.size()];

        arr1[0]=nums[0];
        arr2[nums.size()-1]=nums[nums.size()-1];

        for(int i=1;i<nums.size();i++){
            cnt = cnt*nums[i];
            arr1[i]=cnt;
        }
        cnt=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            cnt = cnt*nums[i];
            arr2[i]=cnt;
        }
        for(int i=0;i<nums.size();i++){
            if(i==0){
                nums[i]=arr2[1];
            }
            else if(i==nums.size()-1){
                nums[i]=arr1[nums.size()-2];
            }
            else{
                nums[i]=arr1[i-1]*arr2[i+1];
            }
        }
        return nums;
    }
};