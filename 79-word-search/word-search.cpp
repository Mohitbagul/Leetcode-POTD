class Solution {
public:

    bool solve(vector<vector<char>>& board,int i,int j,int x,string word){
        if(x == word.length())return 1;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='0' || board[i][j]!=word[x]){
            return false;
        }
        


        char temp = board[i][j];
        board[i][j]='0';
        bool left = solve(board,i-1,j,x+1,word);
        bool right = solve(board,i+1,j,x+1,word);
        bool top = solve(board,i,j-1,x+1,word);
        bool bottom = solve(board,i,j+1,x+1,word);
        board[i][j]=temp;

        return left || right || top || bottom;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    int x = 0;
                    if(solve(board,i,j,x,word)) return true;
                }
            }
        }
        return false;
    }
};