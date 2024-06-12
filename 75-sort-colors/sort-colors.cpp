class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3];
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int index=0;
        for(int i=0;i<nums.size();i++){
            
            for(int j=index;j<3;j++){
                if(arr[index]==0){
                    index++;
                }
            }
            
            if(arr[index]!=0){
                nums[i]=index;
                arr[index]--;
            }
        }
    }
};