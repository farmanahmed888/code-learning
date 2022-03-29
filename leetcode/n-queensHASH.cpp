class Solution {
public:
    void solve(int col,
               vector<string> &board,
               vector<vector<string>> &ans, 
               vector<int> leftRow,
               vector<int> upperDiag,
               vector<int> lowerDiag,
               int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(leftRow[row] == 0 and
               upperDiag[row + col] == 0 and
               lowerDiag[n - 1 + row - col] == 0){
                
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDiag[row + col] = 1;
                lowerDiag[n - 1 + row -col] = 1;
                solve(col+1, board, ans, leftRow, upperDiag, lowerDiag, n);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDiag[row + col] = 0;
                lowerDiag[n - 1 + row -col] = 0;
            
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
        vector<int> leftRow(n, 0),
                    upperDiag(2*n-1, 0),
                    lowerDiag(2*n-1, 0);
        int col = 0;
        solve(col, board, ans, leftRow, upperDiag,lowerDiag, n);
        return ans;
    }
};