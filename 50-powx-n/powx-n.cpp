class Solution {
public:

    double find_power(double x,int n){

        if(n==0) return 1.0;

        double y = find_power(x,n/2);

        if(n%2==1){
            return y*y*x;
        }
        else{
            return y*y;
        }
    }
    double myPow(double x, int n) {
        if(x==0){
            return 0;
        }
        else if(n==0){
            return 1;
        }
        else if(n>0){
            double a = find_power(x,abs(n)); 
            return a;
        }
        else if(n<0){

            if(n==INT_MIN){
                return 1/(find_power(x,INT_MAX)*x);
            }
            else 
            return 1/find_power(x,abs(n));
        }
        return 0;
    }
};