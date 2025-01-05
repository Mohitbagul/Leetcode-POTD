class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>v(s.length()+1,0);
        for(int i=0;i<shifts.size();i++){
            if(shifts[i][2]==0){
                v[shifts[i][0]] += -1;
                v[shifts[i][1]+1] += 1;
            }
            else{
                v[shifts[i][0]] += 1;
                v[shifts[i][1]+1] += -1;
            }
        }

        int cnt = 0;

        for(int i=0;i<s.length();i++){
            cnt+=v[i];
            
            int c = s[i]+cnt-97;

            c = ((c%26)+26)%26;

            s[i] = 'a'+ c;
        }

        return s;
    }
};