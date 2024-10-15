class Solution {
public:
    int maxProfit(vector<int>& prices) {
       vector<int>left;
       vector<int>right;

       int mini=prices[0];

       int only1max=0;

       int diff=0;

       for(int i=0;i<prices.size();i++){
        mini = min(mini,prices[i]);
        diff = max(diff,prices[i]-mini);
        only1max = max(only1max,diff);
        left.push_back(diff);
       } 

       for(int i=0;i<left.size();i++){
        cout<<left[i]<<" ";
       }
       cout<<endl;

       int maxi = prices[prices.size()-1];

       diff=0;

       for(int i=prices.size()-1;i>=0;i--){
        maxi = max(maxi,prices[i]);
        diff = max(diff,maxi-prices[i]);
        right.push_back(diff);
       }
       reverse(right.begin(),right.end());

       for(int i=0;i<left.size();i++){
        cout<<right[i]<<" ";
       }
       cout<<endl;



       int ans=0;

       for(int i=0;i<prices.size()-1;i++){
        ans = max(ans,left[i]+right[i+1]);
       }

       return max(only1max,ans);
    }
};