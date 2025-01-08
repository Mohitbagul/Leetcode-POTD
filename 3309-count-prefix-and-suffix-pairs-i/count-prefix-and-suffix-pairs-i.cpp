class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();

        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string s1 = words[i],s2 = words[j];

                int flag=0;

                for(int k = 0; k<s1.length() ; k++){
                    if(s1[k]!=s2[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    continue;
                }

                int pos = s2.length()-1;

                for(int k = s1.length()-1;k>=0;k--){
                    if(s1[k]!=s2[pos--]){
                        flag=1;
                        break;
                    }
                }

                if(flag==1) continue;

                cnt++;
            }
        }

        return cnt;
    }
};