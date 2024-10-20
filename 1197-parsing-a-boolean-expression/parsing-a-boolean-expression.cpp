class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char>st;

        char ch;

        for(int i=0;i<expression.length();i++){
            if(expression[i]=='|' || expression[i]=='&' || expression[i]=='!' || 
            expression[i]=='f' || expression[i]=='t'){
                st.push(expression[i]);
            }
            else if(expression[i]==')'){
                int true1=0,false1=0;
                while(!st.empty() && (st.top()!='&' && st.top()!='|' && st.top()!='!')){
                    if(st.top()=='t'){
                        true1++;
                    }
                    else{
                        false1++;
                    }
                    st.pop();
                }
                    char c = st.top();
                    st.pop();
                    if(c=='&'){
                        if(false1>0){
                            st.push('f');
                        }
                        else{
                            st.push('t');
                        }
                    }
                    else if(c=='|'){
                        if(true1>0){
                            st.push('t');
                        }
                        else{
                            st.push('f');
                        }
                    }
                    else if(c=='!'){
                        if(true1>0){
                            st.push('f');
                        }
                        else{
                            st.push('t');
                        }
                    }
                
            }
        }

        if(st.top()=='t'){
            return ch = true;
        }
        return ch = false;
    }
};