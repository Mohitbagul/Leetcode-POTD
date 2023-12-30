class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int arr[26]={0};
        for(int i=0;i<words.size();i++){
            string s = words[i];
            for(int j=0;j<s.length();j++){
                arr[s[j]-97]++;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]%words.size()!=0){
                return false;
            }
        }
        return true;
    }
};