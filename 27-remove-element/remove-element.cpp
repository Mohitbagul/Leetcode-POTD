class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;

        for(auto i:nums){
            if(i!=val){
                v.push_back(i);
            }
        }

        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }

        return v.size();
    }
};