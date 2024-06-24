class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int cnt=0;
        int maxi=0;

        int n = nums.size();

        vector<int>arr(n+1,0);

        for(int i=0;i<=nums.size()-k;i++){

            maxi+=(arr[i]);

            if(nums[i]==0 && maxi%2==0){  
                nums[i]=1;
                arr[k+i]=-1;
                cnt++;
                maxi++;
            } 
            else if(nums[i]==1 && maxi%2==1){
                nums[i]=1;
                arr[k+i]=-1;
                cnt++;
                maxi++;
            }  
            else{
                nums[i]=1;
            }
        }

        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;

        // cout<<maxi<<endl;

        for(int i=nums.size()-k+1;i<nums.size();i++){
            maxi+=(arr[i]);
            if(nums[i]==0 && maxi%2==0){
                return -1;
            }
            else if(nums[i]==1 && maxi%2==1){
                return -1;
            }
            else{
                nums[i]=1;
            }
        }

        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;

        // cout<<maxi<<endl;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            return -1;
        }

        return cnt;
    }
};