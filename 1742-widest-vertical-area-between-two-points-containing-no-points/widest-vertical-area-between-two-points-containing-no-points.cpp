class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max_dist=0;
        for(int i=1;i<points.size();i++){
            max_dist = max(max_dist,(points[i][0]-points[i-1][0]));
        }
        return max_dist;
    }
};