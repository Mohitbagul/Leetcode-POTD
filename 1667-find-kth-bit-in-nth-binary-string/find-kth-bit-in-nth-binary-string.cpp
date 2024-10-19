class Solution {
public:
    string sol2(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }

        for(i=0;i<s.length();i++){
            if(s[i]=='1')s[i]='0';
            else s[i]='1';
        }
        return s;
    }

    string sol(int n){
        if(n==1)return "0";

        string s = sol(n-1);
        return s+"1"+sol2(s);

    }

    char findKthBit(int n, int k) {
        string s = sol(n);
        return s[k-1];
    }
};