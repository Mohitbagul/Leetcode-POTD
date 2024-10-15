class Solution {
public:
    long long minimumSteps(string s) {
        int i=0,j=0;

        long long ans=0;

        while(j!=s.length()){
            if(s[j]=='0'){
                ans+=(j-i);
                i++;
            }
            j++;
        }
        return ans;
    }
};