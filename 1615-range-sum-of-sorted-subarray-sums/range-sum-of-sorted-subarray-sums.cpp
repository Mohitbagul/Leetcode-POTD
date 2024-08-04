class Solution {
public:
    long long MOD = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int>v;

        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
            int sum=nums[i];
            for(int j=i+1;j<n;j++){
                sum=((sum%MOD)+(nums[j]%MOD))%MOD;
                v.push_back(sum);
            }
        }

        sort(v.begin(),v.end());

        int ans=0;

        for(int i=left-1;i<=right-1;i++){
            ans=((ans%MOD)+(v[i]%MOD))%MOD;
        }

        return ans;
    }
};