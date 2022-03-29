class Solution {
public:
    bool isSafe(int row, int col,vector<string> &board, int n){
        int dupRow = row;
        int dupCol = col;
        while(row >= 0 and col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        row = dupRow;
        col = dupCol;
        while(col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        row = dupRow;
        col = dupCol;
        while(row < n and col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string> board(n);
        vector<vector<string>> ans;
        for(int i = 0; i < n; i++){
            board[i] = s;
        }
        int col = 0;
        solve(col, board, ans, n);
        return ans;
    }
};