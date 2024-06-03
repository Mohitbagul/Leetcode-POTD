class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        int n = s.length();

        while(j!=t.length()){
            if(i>=n){
                return t.length()-j;
            }
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};