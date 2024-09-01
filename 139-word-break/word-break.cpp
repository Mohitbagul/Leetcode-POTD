class Solution {
public:

    bool solve(string& s,vector<string>& wordDict,int prev,int next, vector<vector<int>>& dp){

        if(next==s.length()) return false;
        if(dp[prev][next]!=-1)return dp[prev][next];
        bool a = false;
        if(find(wordDict.begin(),wordDict.end(),s.substr(prev,next-prev+1))!=wordDict.end()){
            if(next+1==s.length()) return true;
             a = solve(s,wordDict,next+1,next+1, dp);
        }
        bool b = solve(s,wordDict,prev,next+1, dp);

        return dp[prev][next] = a||b;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int prev=0,next=0;
        // set<string>st;
        // for(int i=0;i<wordDict.size();i++){
        //     st.insert(wordDict[i]);
        // }

        vector<vector<int>>dp(s.length()+2,vector<int>(s.length()+2,-1));
        return solve(s,wordDict,prev,next,dp);
    }
};