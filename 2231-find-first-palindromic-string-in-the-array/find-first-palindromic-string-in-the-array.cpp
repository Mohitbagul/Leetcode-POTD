class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string str=words[i];
            int flag=0;
            for(int j=0;j<words[i].length()/2;j++){
                if(str[j]!=str[str.length()-j-1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            return str;
        }
        return "";
    }
};