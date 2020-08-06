class Solution {
public:
    bool checkVertical(vector<vector<char>>& board){
        set<int> counter;
        int count = 0;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    count++;
                }
                if(board[j][i] != '.'){
                    counter.insert((board[j][i] - '0'));
                }
            }
            if(counter.size() + count < 9)
                return false;
            count = 0;
            counter.clear();
            
        }
        return true;
    }
    bool checkHorizontal(vector<vector<char>>& board){
        set<int> counter;
        int count = 0;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    count++;
                }
                if(board[i][j] != '.'){
                    counter.insert((board[i][j] - '0'));
                }
            }
            if(counter.size() + count < 9)
                return false;
            count = 0;
            counter.clear();
            
        }
        return true;
    }
    bool checkCube(vector<vector<char>>& board, int n, int m){
        set<int> counter;
        int count = 0;
        for(int i = n; i < n + 3; i++){
            for(int j = m; j < m + 3; j++){
                if(board[i][j] == '.'){
                    count++;
                }
                if(board[i][j] != '.'){
                    counter.insert((board[i][j] - '0'));
                }
            }
        }
        if(counter.size() + count < 9)
            return false;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool checkVert = checkVertical(board);
        bool checkHor = checkHorizontal(board);
        if(!checkVert or !checkHor)
            return false;
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                bool checkC = checkCube(board, i, j);
                if(!checkC)
                    return false;
            }
        }
        return true;        
    }
};

