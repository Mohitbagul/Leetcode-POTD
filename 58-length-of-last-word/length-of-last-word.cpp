class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag=0,cnt=0;
        int i = s.length()-1;
        while(i>=0){
            if(s[i]==' ' && cnt>0){
                return cnt;
            }
            else if(s[i]!=' '){
                cnt++;
            }
            i--;
        }
        return cnt;
    }
};