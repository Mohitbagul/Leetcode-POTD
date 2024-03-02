class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int a=0,b=nums.size()-1;

        vector<int>v(nums.size());

        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[a])>=abs(nums[b])){
                v[i]=nums[a]*nums[a];
                a++;
            }
            else{
                v[i]=nums[b]*nums[b];
                b--;
            }
        }  
        return v;
    }
};