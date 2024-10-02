class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=1;
        }

        int cnt=1;

        for(auto it:mp){
            mp[it.first] = cnt;
            cnt++;
        }
        
        vector<int>ans;

        for(int i=0;i<arr.size();i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};