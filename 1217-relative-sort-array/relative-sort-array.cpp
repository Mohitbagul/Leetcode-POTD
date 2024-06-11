class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp1,mp2;

        for(int i=0;i<arr2.size();i++){
            mp1[arr2[i]]=i;
        }

        multiset<int>st;

        for(int i=0;i<arr1.size();i++){
            if(mp1.find(arr1[i])!=mp1.end()){
                mp2[arr1[i]]++;
            }
            else{
                st.insert(arr1[i]);
            }
        }

        vector<int>v;

        for(int i=0;i<arr2.size();i++){
            int x=mp2[arr2[i]];
            for(int j=0;j<x;j++){
                v.push_back(arr2[i]);
            }
        }

        for(auto it:st){
            v.push_back(it);
        }

        return v;
    }
};