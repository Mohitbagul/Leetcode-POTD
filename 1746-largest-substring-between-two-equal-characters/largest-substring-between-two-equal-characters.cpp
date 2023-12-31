class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int arr1[26]={0},arr2[26]={0};
        for(int i=0;i<s.length();i++){
            if(arr1[s[i]-97]==0){
                arr1[s[i]-97]=i+1;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(arr2[s[i]-97]==0){
                arr2[s[i]-97]=i;
            }
        }
        
        int maxi=0,flag=0;
        for(int i=0;i<26;i++){
            if(arr2[i]>=arr1[i] && arr1[i]!=0){
                flag=1;
            }
            maxi=max(maxi,arr2[i]-arr1[i]);
        }
        if(flag==0) return -1;
        return maxi;
    }
};