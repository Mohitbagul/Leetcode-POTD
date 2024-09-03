class Solution {
public:
    int getLucky(string s, int k) {
        int cnt=0;

        for(int i=0;i<s.length();i++){
            // cout<<int(s[i]-96)<<endl;
            cnt += (s[i]-96)%10 + (s[i]-96)/10;
        }

        // cout<<cnt<<endl;

        for(int i=0;i<k-1;i++){
            int cnt1=0;
            while(cnt>0){
                cnt1+=(cnt%10);
                cnt=cnt/10;
            }
            cnt = cnt1;
        }

        return cnt;
    }
};