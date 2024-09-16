class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());

        int flag=0,mid_min;

        int ans=INT_MAX;

        vector<pair<int,int>>v1;

        for(int i=0;i<timePoints.size();i++){
            
            string str = timePoints[i];
            int hrs=0,minu=0;

            bool befcol=true;

            for(int i=0;i<str.length();i++){
                if(befcol==true){
                    if(str[i]==':') befcol=false;
                    else hrs = hrs*10 + (str[i]-'0');
                }
                else{
                   minu = minu*10 + (str[i]-'0');  
                }
            }

            if(i>0){
                int a  = (v1.end()-1)->first;
                int b  = (v1.end()-1)->second;


                if(b!=minu)
                ans = min(ans , ((hrs-(a+1))*60 + (60-b + minu)));
                else ans = min(ans,(hrs-a)*60);

            } 

            if(i==timePoints.size()-1){
                if(minu!=0)
                ans = min(ans , 60-minu+v1[0].second + (24 - hrs -1 +v1[0].first)*60);
                else
                ans = min(ans , v1[0].second + (24 - hrs +v1[0].first)*60);
            }

            v1.push_back(make_pair(hrs,minu));
        }
        return ans;
    }
};