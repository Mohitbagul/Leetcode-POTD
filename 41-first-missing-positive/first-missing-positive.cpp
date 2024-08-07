class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>nums.size()){
                nums[i]=nums.size()+1;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<=nums.size())
            {
                // cout<<i<<" "<<nums[nums[i]-1]<<endl;

                nums[abs(nums[i])-1]=-1*abs(nums[abs(nums[i])-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};