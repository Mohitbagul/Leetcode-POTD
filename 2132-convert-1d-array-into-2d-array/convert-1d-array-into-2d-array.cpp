class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        vector<int>v(n,0);

        if(m*n!=original.size()) return ans;

        for(int i=0;i<original.size();i++){
            v[i%n]=original[i];
            if(((i+1)%n)==0){
                ans.push_back(v);
            }
        }
        return ans;
    }
};