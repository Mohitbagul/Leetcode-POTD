class Solution {
public:

    int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
    }

    int lcm(int a,int b){
        int x = hcf(a,b);

        return (a*b)/x;
    }
    
    string fractionAddition(string expression) {
        int flag=0;
        vector<vector<int>>v;

        int num1=0,num2=0,bef_slash=1;

        for(int i=0;i<expression.length();i++){
            if(expression[i]=='-' && bef_slash==1){
                flag=1;
            }
            else if(expression[i]=='+' && bef_slash==1){
                flag=0;
            } 

            if(expression[i]=='-' && bef_slash==0){
                if(flag==1) num1 = -1*num1;
                v.push_back({num1,num2});
                num1=0;
                num2=0;
                flag=1;
                bef_slash=1;
            }
            else if(expression[i]=='+' && bef_slash==0){
                if(flag==1) num1 = -1*num1;
                v.push_back({num1,num2});
                num1=0;
                num2=0;
                flag=0;
                bef_slash=1;
            } 

            if(expression[i]=='/'){
                bef_slash=0;
            }

            if(expression[i]>=48 && expression[i]<=57 && bef_slash==1){
                num1 = num1*10 + (expression[i]-48);
            }
            else if(expression[i]>=48 && expression[i]<=57 && bef_slash==0){
                num2 = num2*10 + (expression[i]-48);
            }
        }
        if(flag==1) num1 = -1*num1;
        v.push_back({num1,num2});



        
        int a = v[0][0],b=v[0][1];

        for(int i=1;i<v.size();i++){
            int x = lcm(abs(v[i][1]),abs(b));
            
            a = (a*(x/b)) + (v[i][0]*(x/v[i][1]));
            b = x;
        }

        int x = hcf(abs(a),abs(b));

        a = a/x;
        b=b/x;
        return to_string(a)+"/"+to_string(b);
    }
};