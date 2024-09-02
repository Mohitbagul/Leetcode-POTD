class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }

        long long x = k%sum;

        // k=k%sum;

        // cout<<k<<endl;

        for(int i=0;i<chalk.size();i++){
            if(x<chalk[i]){
                return i;
            }
            x = x-chalk[i];
        }
        return 0;
    }
};