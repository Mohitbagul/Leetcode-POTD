class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { 
        vector<int>v,n(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            n[nums[i]-1]++;
            cout<<nums[i]<<" "<<n[nums[i]-1]<<endl;
            if(n[nums[i]-1]==2){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};