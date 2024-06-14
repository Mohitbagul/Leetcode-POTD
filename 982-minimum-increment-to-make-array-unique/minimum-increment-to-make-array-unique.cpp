class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        map<int,int>mp;

        int cnt=0;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int j=0;

        for(auto it:mp){
                while(mp[it.first]>1){
                    if(mp.find(j)==mp.end() && j>it.first){
                        mp[it.first]--;
                        cnt+=(j-it.first);
                    }
                        j++;
                }
        }

        return cnt;
        
    }
};