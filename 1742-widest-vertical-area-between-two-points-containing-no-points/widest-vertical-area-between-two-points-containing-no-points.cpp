class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        int max_dist=0;
        for(int i=1;i<points.size();i++){
            max_dist = max(max_dist,(points[i][0]-points[i-1][0]));
        }
        return max_dist;
    }
};