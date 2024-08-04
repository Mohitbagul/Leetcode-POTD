class Solution {
public:
    long long MOD = 1e9+7;

    long long count(long long N,long long r){

        if(r==0){
            return 1;
        }

        long long x = count(N,r/2);
        
        if(r%2){
            return ((x*x) %MOD *N %MOD)%MOD;
        }
        else{
            return (x*x)%MOD;
        }


    }
    int countGoodNumbers(long long n) {

        long long  even = n/2 + (1&(n%2));
        long long  odd = n/2;
        return (count(5,even)*count(4,odd))%MOD;
    }
    
};