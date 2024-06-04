class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        int cnt=0,flag=0;

        for(auto it:mp){
            if(it.second%2==0){
                cnt += it.second;
            }
            else{
                cnt += it.second-1;
                flag=1;
            }
        }
        if(flag==1){
            return cnt+1;
        }
        else{
            return cnt;
        }
    }
};