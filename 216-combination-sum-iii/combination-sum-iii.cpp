class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,int n,int k,int ind,int arr[]){
        if(n<0 || v.size()>k)
        return;

        if(v.size()==k && n==0){
            ans.push_back(v);
            return;
        }

        for(int i=ind;i<9;i++){
            v.push_back(arr[i]);
            solve(ans,v,n-arr[i],k,i+1,arr);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[]={1,2,3,4,5,6,7,8,9};

        vector<int>v;
        vector<vector<int>>ans;
        int a=0;

        solve(ans,v,n,k,a,arr);
        return ans;
    }
};