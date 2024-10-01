class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            if(arr[i]%k < 0){
                mp[arr[i]%k + k]++;
                continue;
            }
            mp[arr[i]%k]++;
        }
        
        for(auto it:mp){
            if(it.first==0 && it.second%2!=0) return false;
            else if(it.first>0 && (mp[it.first]!=mp[k-it.first])){
                return false;
            }
        }

        return true;
    }
};