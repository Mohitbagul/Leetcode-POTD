class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int,greater<int>>mp;
        for(int i=0;i<score.size();i++){
            mp[score[i]]=i;
        }
        vector<string>v(score.size());
        int cnt=1;
        for(auto it:mp){
            if(cnt==1){
                v[it.second]="Gold Medal";
            }
            else if(cnt==2){
                v[it.second]="Silver Medal";
            }
            else if(cnt==3){
                v[it.second]="Bronze Medal";
            }
            else{
                v[it.second]=to_string(cnt);
            }
            cnt++;
        }
        return v;
    }
};