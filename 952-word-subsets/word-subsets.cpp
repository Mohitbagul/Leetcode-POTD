class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;

        string s1 = "";
        unordered_map<char,int>mp1;

        for(int i=0;i<words2.size();i++){
            string m = words2[i];

            unordered_map<char,int>mp2;

            for(int j=0;j<m.length();j++)
                {
                    mp2[m[j]]++;
                    mp1[m[j]] = max(mp1[m[j]],mp2[m[j]]);
                }
        }

        for(auto it:mp1){
            for(int i=0;i<it.second;i++){
                s1+=it.first;
            }
        }

        cout<<s1<<endl;


        for(int i=0;i<words1.size();i++){
            unordered_map<char,int>mp2;
            string s =  words1[i];

            for(int j=0;j<s.length();j++){
                mp2[s[j]]++;
            }
            int flag=0;


            for(auto it:mp1){
                cout<<mp1[it.first]<<" "<<mp2[it.first]<<endl;
                if(mp1[it.first]>mp2[it.first]){
                    flag=1;
                    break;
                }
            }

            cout<<endl;
            if(flag==0) ans.push_back(s);
        }

        return ans;
    }
};