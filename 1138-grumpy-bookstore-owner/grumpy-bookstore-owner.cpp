class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i=0,j=0;

        int index=0;

        map<int,pair<int,int>,greater<int>>mp;

        int count=0,maxi=0;

        while(j!=customers.size()){
            if(j-i<minutes){
                if(grumpy[j]==1){
                    count+=customers[j];
                }
                j++;
            }
            if(j-i==minutes){
                maxi=max(maxi,count);
                mp.insert(make_pair(maxi,make_pair(i,j-1)));
                if(grumpy[i]==1){
                    count-=customers[i];
                }
                i++;
            }
        }

        int a = (mp.begin()->second).first;
        int b = (mp.begin()->second).second;

        int res=0;

        for(int i=0;i<customers.size();i++){
            if(i<a || i>b){
                if(grumpy[i]==0){
                    res+=customers[i];
                }
            }
            else{
                res+=customers[i];
            }
        }

        return res;
    }
};