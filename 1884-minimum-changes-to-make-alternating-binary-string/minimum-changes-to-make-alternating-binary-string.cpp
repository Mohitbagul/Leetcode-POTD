class Solution {
public:
    int minOperations(string s) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && i%2==0){
                cnt1++;
            }
            else if(s[i]=='1' && i%2){
                cnt1++;
            }

            if(s[i]=='1' && i%2==0){
                cnt2++;
            }
            else if(s[i]=='0' && i%2){
                cnt2++;
            }
        }
        return min(cnt1,cnt2);
    }
};