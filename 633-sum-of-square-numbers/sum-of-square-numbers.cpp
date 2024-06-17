class Solution {
public:
    bool judgeSquareSum(int c) {

        if(c==0){
            return true;
        }

        for(int i=0;i<=c/2;i++){

            if(i!=0 && ((c/i/i))<1){
                break;
            }

            long long x = i*i;

            x=c-x;

            int y = sqrt(x);


            if(y*y==x){
                return true;
            }

        }
            return false;
    }
};