class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>mp;

        int ans=0;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
                long long a = nums[i];
                int cnt = 0;
                while(mp[a]==1){
                    if(a>INT_MAX) break;
                    cnt++;
                    mp[a]=-1;
                    a=a*a;
                }
                ans = max(ans,cnt);
        }

        if(ans==1) return -1;
        return ans;
    }
};