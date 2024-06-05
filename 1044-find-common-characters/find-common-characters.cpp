class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        map<char,int>mp;
        string s = words[0];
        int len = s.length();
        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }

        for(int i=1;i<words.size();i++){
            string m = words[i];
            map<char,int>mp1 = mp;

            for(int j=0;j<m.length();j++){
                if(mp.find(m[j])!=mp.end()){
                    mp1[m[j]]-=1;
                    // cout<<mp1[m[j]]<<endl;
                    if(mp1[m[j]]<=0){
                        mp1.erase(m[j]);
                    }
                }
            }

            for(auto it:mp1){
                if(mp.find(it.first)!=mp.end()){
                    mp[it.first]= mp[it.first] - it.second;

                    if(mp[it.first]<=0){
                         mp.erase(it.first);
                    }
                }
            }
        }

        vector<string>v;

        for(auto it:mp){
            for(int i=0;i<it.second;i++){
                string str(1,it.first);
                v.push_back(str);
            }
        }
        return v;
    }
};