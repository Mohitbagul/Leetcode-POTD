class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int high = INT_MIN;
        vector<int>v;
        int flag=0;

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<high){
                flag=1;
                v.push_back(nums[i]);
                sort(v.begin(),v.end());
                int pos=i,num;
                for(int j=0;j<v.size();j++){
                    if(v[j]==nums[i]){
                        if(v[j]!=v[j+1]){
                            num = v[j+1];
                            nums[pos++]=v[j+1];
                            v.erase(v.begin()+j+1);
                            break;
                        }
                    }
                }
                for(int j=0;j<v.size();j++){
                    nums[pos++] = v[j];
                }

                break;
            }
            high = max(high,nums[i]);
            v.push_back(nums[i]);
        }

        if(flag==0){
            sort(nums.begin(),nums.end());
        }
    }
};