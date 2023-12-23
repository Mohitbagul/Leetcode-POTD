class Solution {
public:
    bool isPathCrossing(string path) {

        multimap<int,int>mp;
        mp.insert(pair<int,int>(0,0));
        int x=0,y=0;

        for(int i=0;i<path.length();i++){
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else if(path[i]=='W'){
                x--;
            }
            auto itr1 = mp.lower_bound(x);
            auto itr2 = mp.upper_bound(x);
            
            while(itr1!=itr2){
                if(itr1->second==y && itr1->first==x)
                return true;

                itr1++;
            }
            mp.insert(pair<int,int>(x,y));
        }
        return false;
    }
};