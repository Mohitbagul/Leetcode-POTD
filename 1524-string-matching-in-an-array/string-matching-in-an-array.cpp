class Solution {
public:
    static bool compare(string &s1,string &s2){
        return (s1.length()<s2.length());
    }

    vector<string> stringMatching(vector<string>& words) {
        // vector<int>v(words.size(),0);
        sort(words.begin(),words.end(),compare);

        vector<string>ans;

        for(int i=0;i<words.size();i++){
                for(int j=i+1;j<words.size();j++){
                    if(words[j].find(words[i]) != string::npos){
                        ans.push_back(words[i]);
                        break;
                    }
                }
        }
        return ans;
    }
};