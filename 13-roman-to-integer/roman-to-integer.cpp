class Solution {
public:
    int romanToInt(string s) {

        int ans = 0;
        int i=0,v=0,x=0,l=0,c=0,d=0,m=0;

        for(int j=0;j<s.length();j++){
            if(s[j]=='M'){
                m++;
                if(c>0){
                    ans += 900;
                    c--;
                    m--;
                }
            }
            else if(s[j]=='C'){
                c++;
                if(x>0){
                    ans += 90;
                    c--;
                    x--;
                }
            }
            else if(s[j]=='D'){
                d++;
                if(c>0){
                    ans += 400;
                    c--;
                    d--;
                }
            }
            else if(s[j]=='L'){
                l++;
                if(x>0){
                    ans += 40;
                    l--;
                    x--;
                }
            }
            else if(s[j]=='X'){
                x++;
                if(i>0){
                    ans += 9;
                    x--;
                    i--;
                }
            }
            else if(s[j]=='V'){
                v++;
                if(i>0){
                    ans += 4;
                    v--;
                    i--;
                }
            }
            else if(s[j]=='I'){
                i++;
            }
        }

        if(i>0){
            ans += i*1;
        }
        if(v>0){
            ans += v*5;
        }
        if(x>0){
            ans += x*10;
        }
        if(l>0){
            ans += l*50;
        }
        if(c>0){
            ans += c*100;
        }
        if(d>0){
            ans += d*500;
        }
        if(m>0){
            ans += m*1000;
        }

        return ans;
    }
};