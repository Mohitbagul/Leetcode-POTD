class Solution {
public:
    void solve(vector<int>&ans,int x,int n){
        for(int i=0;i<=9;i++){
            if(x+i>n || (ans.size()>2 && x+i==10)) return;
            ans.push_back(x+i);
            solve(ans,(x+i)*10,n);
        }
        return;
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        solve(ans,1,n);
        return ans;
    }
};