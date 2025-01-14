class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int cnt=0;

        vector<int>ans;

        unordered_map<int,int>mp1,mp2;

        for(int i=0;i<A.size();i++){
            mp1[A[i]]++;
            mp2[B[i]]++;

            if(A[i]==B[i]){
                cnt+=1;
            }

            else {
                if(mp1[A[i]] && mp2[A[i]]){
                cnt+=1;
                }
                if(mp1[B[i]] && mp2[B[i]]){
                    cnt+=1;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};