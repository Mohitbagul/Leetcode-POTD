class Solution {
    int mod = 1000000007;
    int a[55][55][55];

    int solve(int m, int n, int N, int i, int j){
        if(i>=m||j>=n||i<0||j<0) return 1;

        if(N<=0)return 0;

        if(a[i][j][N]!=-1)return a[i][j][N];

        

        long l = solve(m,n,N-1,i,j-1)%mod;
        long r = solve(m,n,N-1,i,j+1)%mod;
        long u = solve(m,n,N-1,i-1,j)%mod;
        long d = solve(m,n,N-1,i+1,j)%mod;

        a[i][j][N] = (l+r+u+d)%mod;



        return a[i][j][N];
    }

public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        
         memset(a,-1,sizeof(a));
        return solve(m,n,maxMove,startRow,startColumn);
    }
};