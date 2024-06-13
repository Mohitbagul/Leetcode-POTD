class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low=0,high=nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }

            if(high==low){
                cout<<mid<<endl;
                if(nums[low]>=target){
                    return low;
                }
                else{
                    return low+1;
                }
            }
        }
            return low;
    }
};