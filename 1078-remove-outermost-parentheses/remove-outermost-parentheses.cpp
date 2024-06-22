class Solution {
public:

//(()()((())))
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<int>st;

        int i=0;

        while(i!=s.length()){
            if(s[i]=='('){
                if(st.size()>0){
                    ans+='(';
                }
                st.push('(');
            }
            else if(s[i]==')'){
                st.pop();
                if(!st.empty())
                    ans+=')';
            }
            i++;
        }

        return ans;
    }
};