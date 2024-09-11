class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start^goal;

        int ans=0;

        while(a!=0){
            if(a%2) ans++;
            a=a/2;
        }
        return ans;
    }
};