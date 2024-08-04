class Solution {
public:

    long long num=0,flag=0,mark=0;

    int find_num(string s,int i){
        if(i==s.length()){
            if(num>=INT_MAX){
                if(flag==0)
                    return INT_MAX;
                else
                {
                    if(num==2147483647){
                        return -2147483647;  
                    }

                    cout<<INT_MIN<<endl;
                    return INT_MIN;
                }
        }

           if(flag==1){
                return (int)-1*num;
            }
            return (int)num;
        }

        if(num>=INT_MAX){
            if(flag==0)
            return INT_MAX;
            else 
            return INT_MIN;
        }

        if(s[i]=='-'  && mark==0){
            flag=1;
            mark=1;
        }
        else if(s[i]=='+'  && mark==0){
            mark=1;
            flag=0;
        }
        else if(s[i]>=48 && s[i]<=57){
            num=num*10+s[i]-48;
            mark=1;
        }

        else if(s[i]==' ' && mark==0) ;
        
        else {
             if(num>=INT_MAX){
                if(flag==0)
                    return INT_MAX;
                else
                    return INT_MIN;
        }

            if(flag==1){
                return (int)-1*num;
            }
            return (int)num;
        }
        int x = find_num(s,i+1);
        return x;
    }

    int myAtoi(string s) 
    {
        return find_num(s,0);
    }
};