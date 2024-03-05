class Solution {
public:
    int minimumLength(string s) {

        while(s.length()){
            if(s.length()==1){
                return 1;
            }
            if(s[0]!=s[s.length()-1])
            {
                return s.length();
            }
            else if(s[0]==s[s.length()-1]){
                char c = (s[0]);

                // cout<<c<<" "<<s[0]<<endl;

                while(s[0]==c || s[s.length()-1]==c){
                   
                    if(s[0]==c){
                        // cout<<111<<endl;
                        s.erase(s.begin());
                    }
                    else if(s[s.length()-1]==c){
                        s.erase(s.end()-1);
                    }
                    if(s.length()==0){
                        cout<<222<<endl;
                        return 0;
                    }
                    
                    // cout<<s<<endl;
                }
                
            }
        }
            
            return 0;
    }
};