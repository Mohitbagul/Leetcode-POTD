class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
        }
        int flag=0;
        int mini2=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]==mini && flag==0){
                flag=1;
                continue;
            }
            else{
                mini2=min(mini2,prices[i]);
            }
        }
        int sum = mini+mini2;
        if(sum>money) return money;
        else return (money-sum);
    }
};