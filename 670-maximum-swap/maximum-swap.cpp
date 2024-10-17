class Solution {
public:
    int maximumSwap(int num) {
        vector<int>v1;
        while(num!=0){
            v1.push_back(num%10);
            num = num/10;
        }

        reverse(v1.begin(),v1.end());
        vector<pair<int,int>>v2;

        v2.push_back({v1[v1.size()-1],v1.size()-1});

        for(int i=v1.size()-1;i>=0;i--){
            pair<int,int>p = v2[v2.size()-1];

            if(p.first < v1[i]){
                v2.push_back({v1[i],i});
            }
            else{
                v2.push_back(p);
            }
        }

        reverse(v2.begin(),v2.end());

        for(int i=0;i<v1.size();i++){
            if(v1[i] < v2[i].first){
                swap(v1[i],v1[v2[i].second]);
                break;
            }
        }

        int ans = 0;

        for(int i=0;i<v1.size();i++){
            ans = ans*10 + v1[i]; 
        }

        return ans;
    }
};