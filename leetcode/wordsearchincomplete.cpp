//https://leetcode.com/problems/word-search/
class Solution {
public:
    void solve(bool ans,vector<vector<char>> &board, string word, string check, int row, int col, int cnt){
        if(cnt >= word.size()){
            if(check == word) ans = true;
            else return;
        }
        while(row < board.size() and row > 0){
            while(col < board[0].size() and col > 0){
                if(board[row][col] == word[cnt]){
                    check += word[cnt];
                    solve(ans, board, word, check, row+1, col, cnt+1);
                    check.pop_back();
                    solve(ans, board, word, check, row , col+1, cnt+1);
                }
            }
        }
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ans = false;
        int i = 0;
        int j = 0;
        int cnt = 0;
        string check = "";
        solve(ans, board, word, check, i, j, cnt);
        return ans;
    }
};