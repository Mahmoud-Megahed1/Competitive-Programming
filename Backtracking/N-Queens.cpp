#include <vector>
#include <string>
using namespace std;

void solveNQueensHelper(int n, int col, vector<string>& board, vector<vector<string>>& result);
bool isSafe(const vector<string>& board, int row, int col, int n);

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> result;
    vector<string> board(n, string(n, '.'));
    solveNQueensHelper(n, 0, board, result);
    return result;
}

void solveNQueensHelper(int n, int col, vector<string>& board, vector<vector<string>>& result) {
    if (col == n) {
        result.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            solveNQueensHelper(n, col + 1, board, result);
            board[row][col] = '.';
        }
    }
}

bool isSafe(const vector<string>& board, int row, int col, int n) {
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 'Q') return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') return false;
    }
    return true;
}
