class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;

        for(int i=0;i<difficulty.size();i++){
           v.push_back(make_pair(difficulty[i],profit[i]));
        }

        sort(worker.begin(),worker.end());
        sort(v.begin(),v.end());

        int res=0;

        int i=0;

        int j=0;

        int best=0;

        while(j!=worker.size()){
            while(i<profit.size() && worker[j]>=v[i].first){
                best=max(best,v[i++].second);
                // it++;
            }
            res+=best;
            j++;
        }

        return res;
    }
};