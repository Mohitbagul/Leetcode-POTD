class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int i=0,j=0;
        while(j<nums.size() && i<nums.size()){
            if(nums[i]==0){
                if(j<i){
                    j=i;
                }
                if(nums[j]!=0){
                    int temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
                else{
                    j++;
                }
            }
            else{
                i++;
            }
        }
    }

};