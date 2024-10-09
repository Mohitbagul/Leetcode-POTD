class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='('){
                st.push('(');
            }
            else{
                if(st.empty() || st.top()==')'){
                    st.push(')');
                }
                if(st.top()=='('){
                    st.pop();
                }
            }
        }
        return st.size();
    }
};