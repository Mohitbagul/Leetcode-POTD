class Solution {
public:
    string reverseWords(string s) {

        string ans="",m="";

        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                m+=char(s[i]);
            }
            else{
                if(m.length()>0 && ans=="")
                ans+=m;
                else if(m.length()>0)
                ans=m+" "+ans;
                m="";
            }
        }

         if(m.length()>0 && ans=="")
                ans+=m;
        else if(m.length()>0)
                ans=m+" "+ans;
                

        return ans;
    }
};