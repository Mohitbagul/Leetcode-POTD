class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setbits = 0;

        int n = num2;

        while(n>0){
            if(n%2) setbits++;
            n=n/2;
        } 

        n = num1;

        vector<int>v;

        int setbits2=0;

        while(n>0){
            v.push_back(n%2);
            if(n%2==1) setbits2++;
            n=n/2;
        }

        int ans=num1;

        if(setbits < setbits2){
            int num = setbits2-setbits;

            int a = 1;

            for(int i=0;i<v.size();i++){
                if(num>0 && v[i]==1){
                    cout<<i<<endl;
                    ans -= a;
                    num--;
                }
                a=a*2;
            }
            return ans;
        }

        reverse(v.begin(),v.end());

        for(int i=0;i<v.size() && setbits;i++){
            if(v[i]==1){
                setbits--;
                v[i]=0;
            }
        }

        ans = num1;

        n = num1;

        int a = 1;

        while(n>0 && setbits){
            if(n%2==0){
                setbits--;
                ans += a;
            }
            a=a*2;
            n=n/2;
        }

        while(setbits){
            ans+=a;
            a=a*2;
            setbits--;
        }

        return ans;
    }
};