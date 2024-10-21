class Solution {
public:

    void solve(string &s, unordered_map<string,int>mp, int &ans, int pos){
        if(pos==s.length()){
            if(mp.size()>ans){
                ans=mp.size();
            }
            return;
        }

        string m = "";
        for(int i=pos;i<s.length();i++){
            m+=s[i];
            if(mp[m]==0){
                mp[m]=1;
                solve(s,mp,ans,i+1);
                mp.erase(m);
            }
        }
        return;
    }
    int maxUniqueSplit(string s) {
        int ans=0;
        int pos=0;
        unordered_map<string,int>mp;
        solve(s,mp,ans,pos);
        if(ans==0) return 1;
        return ans;
    }
};