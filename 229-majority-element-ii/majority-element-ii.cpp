class Solution {
public:

    int right_pos(vector<int>& nums,int low,int high){

        int target = nums[low];

        while(low<high){
            int mid = (low+high)/2;

            if(nums[mid]==target){
                if(mid==nums.size()-1 || nums[mid+1]!=target){
                    return mid;
                }
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            // 3 3 4
        }

        return low;
    }
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int rightpos = right_pos(nums,i,nums.size()-1);
            cout<<rightpos<<endl;

            if(rightpos-i+1 > nums.size()/3){
                ans.push_back(nums[i]);
            }
            i = rightpos;
        }
        return ans;
    }
};