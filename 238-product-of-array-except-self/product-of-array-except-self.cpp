class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long x=1;
        int cnt0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt0++;
            else
            x=x*nums[i];
        }

        for(int i=0;i<nums.size();i++){
            if(cnt0==0){
                nums[i]=(x/nums[i]);
            }
            else if(cnt0==1){
                if(nums[i]!=0){
                    nums[i]=0;
                }
                else{
                    nums[i]=(x);
                }
            }
            else{
                nums[i]=0;
            }  
            
        }
        return nums;
    }
};