class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int>s;
        for(int i=0;i<points.size();i++){
            s.insert(points[i][0]);
        }
        int max_dist=0;
        int x = *(s.begin());
        for(auto it:s){
            int y = it;
            max_dist = max(max_dist , (y-x));
            x=y;
        }
        return max_dist;
    }
};