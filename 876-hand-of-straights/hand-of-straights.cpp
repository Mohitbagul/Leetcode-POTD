class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;

        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }

        for(auto it:mp){
            int a=it.first;
            int b=it.second;

            if(b>0){
                for(int i=0;i<groupSize;i++){
                    if((mp[it.first+i]-=b) <0){
                        return false;
                    }
                }
            }
            
        }
        return true;
    }
};