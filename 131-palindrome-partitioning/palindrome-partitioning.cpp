class Solution {
public:

    bool check(string str){
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-i-1]){
                return false;
            }
        }
        return true;
    }

    bool solve(int prev,int next, vector<string>&v ,vector<vector<string>>&ans, string s){

        if(next == s.length()){
            if(prev == next-1){
                ans.push_back(v);
                return 1;
            }
            else{
                if(check(s.substr(prev+1,next-prev))){
                    v.push_back(s.substr(prev+1,next-prev));
                    ans.push_back(v);
                    v.pop_back();
                    return 1;
                }
                else return 0;
            }
        }

        if(check(s.substr(prev+1,next-prev))){
            v.push_back(s.substr(prev+1,next-prev));
            bool t1 = solve(next,next+1,v,ans,s);
            v.pop_back();

            return solve(prev,next+1,v,ans,s) || t1;
        }
        return solve(prev,next+1,v,ans,s);
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        solve(-1,0,v,ans,s);
        vector<vector<string>>ans1;
        for(int i=0;i<ans.size();i++){
            if(i%2==0) ans1.push_back(ans[i]);
        }
        return ans1;
    }
};