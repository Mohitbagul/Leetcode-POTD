class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = accumulate(rolls.begin(),rolls.end(),0);
        int total = mean*(n+rolls.size());

        total-=sum;

        cout<<total<<endl;

        if(total<n || total>n*6) return {};

        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(total/n);
        }

        int cnt=0;
        if(total%n){
            for(int i=0;i<n;i++){
                v[i]+=1;
                cnt++;
                if(cnt==total%n)
                break;
            }
        }
        return v;
    }
};