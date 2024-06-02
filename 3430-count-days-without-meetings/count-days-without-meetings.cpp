class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       sort(meetings.begin(), meetings.end());

       for(int i=0;i<meetings.size();i++){
        cout<<meetings[i][0]<<" ";
       }
       cout<<endl;

       int cnt=meetings[0][1];
       int res=0;

        for(int i=1;i<meetings.size();i++){
           if(meetings[i-1][1]<meetings[i][0] && cnt<meetings[i][0]){
                res+=(meetings[i][0]-cnt-1);
                cout<<cnt<<" "<<meetings[i][0]<<endl;
                cnt=meetings[i][1];
           }
           else if(meetings[i][0]<=cnt){
                cnt=max(cnt,meetings[i][1]);
           }
        }

        res+=(meetings[0][0]-1);
        res+=(days-cnt);

        return res;
    }
};