class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<pair<string,int>>v;

        for(int i=0;i<arr.size();i++){
            int flag=0;
            for(int j=0;j<v.size();j++){
                if(v[j].first==arr[i]){
                    v[j].second=v[j].second+1;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            v.push_back(make_pair(arr[i],1));
        }

        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        int cnt=0;

        for(int i=0;i<v.size();i++){
            if(v[i].second == 1){
                cnt++;
                if(cnt==k){
                    return v[i].first;
                }
            }
        }
        return "";
    }
};