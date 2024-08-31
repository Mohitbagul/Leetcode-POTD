class Solution {
public:
    vector<string>ans;

    void solve(int cnt,int n,string s){
        if(cnt>n ||cnt<0 || s.length()>n*2) return;

        if(cnt==0 && s.length()==n*2){
            ans.push_back(s);
            return;
        }

        solve(cnt+1,n,s+"(");
        solve(cnt-1,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
        int cnt=0;
        string s="";
        solve(cnt,n,s);
        return ans;
    }
};