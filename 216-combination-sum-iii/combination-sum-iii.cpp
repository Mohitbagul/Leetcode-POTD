class Solution {
public:

    void solve(vector<vector<int>>&ans,vector<int>v,int n,int k,int ind,int arr[]){

        if(v.size()>k || n<0) return;

        if(v.size()==k && n==0){
            ans.push_back(v);
            return;
        }
        if(ind==9) return;
        cout<<arr[ind]<<" ";

        v.push_back(arr[ind]);
        solve(ans,v,n-arr[ind],k,ind+1,arr);
        v.pop_back();
        solve(ans,v,n,k,ind+1,arr);
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