class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int left[height.size()];
        int right[height.size()];

        left[0] = height[0];
        right[height.size()-1] = height[height.size()-1];

        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }

        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1],height[i]);
        }

        int cnt=0;
        int ans=0;

        for(int i=0;i<n;i++){
                cnt+=(min(left[i],right[i])-height[i]);
            
        }

        return cnt;
    }
};