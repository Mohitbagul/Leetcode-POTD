class Solution {
public:
    void bfs(vector<vector<char>>& grid , vector<vector<bool>>& visited , int i , int j){
        queue<pair<int,int>>q;

        int ro = grid.size();
        int col = grid[0].size();

        visited[i][j]=1;

        q.push(make_pair(i,j));

        while(!q.empty()){
            
            int a = q.front().first;
            int b = q.front().second;

            q.pop();

            if(a+1<ro && !visited[a+1][b]){
                if(grid[a+1][b]=='1' ){
                    q.push(make_pair(a+1,b));
                }
                visited[a+1][b] = true;
            }
            if(a-1>=0 && !visited[a-1][b]){
                if(grid[a-1][b]=='1' ){
                    q.push(make_pair(a-1,b));
                }
                visited[a-1][b] = true;
            }
            if(b+1<col && !visited[a][b+1]){
                if(grid[a][b+1]=='1' ){
                    q.push(make_pair(a,b+1));
                }
                visited[a][b+1] = true;
            }
            if(b-1>=0 && !visited[a][b-1]){
                if(grid[a][b-1]=='1' ){
                    q.push(make_pair(a,b-1));
                }
                visited[a][b-1] = true;
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited (grid.size(),vector<bool>(grid[0].size(),false));

        int ans=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1' && visited[i][j] == false){
                    bfs(grid,visited,i,j);
                    ans++;
                }            
            }
        }

        return ans;
    }
};