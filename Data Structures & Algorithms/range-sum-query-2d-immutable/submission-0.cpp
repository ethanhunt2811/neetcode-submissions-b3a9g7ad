class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<pair<int, char>> row, col, box;

        for(int i=0;i<9;i++)
        {
            for(int j =0 ;j<9;j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                if(!row.insert({i, board[i][j]}).second || !col.insert({j, board[i][j]}).second || !box.insert({((i/3)*3 + j/3), board[i][j]}).second)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
