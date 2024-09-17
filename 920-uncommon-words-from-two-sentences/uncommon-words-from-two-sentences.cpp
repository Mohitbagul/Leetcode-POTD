class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp1,mp2;
        string s="";
        vector<string>ans;
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' ' ){
                if(s.length()>0) mp1[s]++;
                s="";
            }
            else if(i==s1.length()-1){
                s+=s1[i];
                if(s.length()>0) mp1[s]++;
                s="";
            }
            else{
                s+=s1[i];
            }
        }
        
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' ' ){
                if(s.length()>0) mp2[s]++;
                s="";
            }
            else if(i==s2.length()-1){
                s+=s2[i];
                if(s.length()>0) mp2[s]++;
                s="";
            }
            else{
                s+=s2[i];
            }
        }
        for(auto x:mp2){
            if(mp1[x.first]!=0){
                if(mp1[x.first]>0) mp1[x.first] *= -1;
            }
            else if(mp2[x.first]==1){
                ans.push_back(x.first);
            }
        }


        for(auto x:mp1){
            if(mp1[x.first]==1) ans.push_back(x.first);
        }

        return ans;
    }
};