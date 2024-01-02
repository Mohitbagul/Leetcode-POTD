class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>>v;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxi=max(maxi,mp[nums[i]]);
        }

        for(int i=0;i<maxi;i++){
            cout<<111<<endl;
            auto it=mp.begin();
            vector<int>m;
            while(it!=mp.end()){
                if(it->second!=0){
                    m.push_back(it->first);
                    mp[it->first]=it->second-1;
                }                
                it++;
            }
            v.push_back(m);
        }
        return v;
    }
};