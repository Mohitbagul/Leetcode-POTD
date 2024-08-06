class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);

        for(int i=0;i<word.size();i++){
            v[word[i]-97]++;
        } 

        sort(v.begin(),v.end(),greater<int>());

        int ans=0,num=0;

        for(int i=0;i<26;i++){
            if(i%8==0) num++;
            ans+=v[i]*num;
        } 
        return ans;      
    }
};