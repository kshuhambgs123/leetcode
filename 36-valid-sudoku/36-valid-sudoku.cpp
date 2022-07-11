class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<set<int>> rows(9),cols(9),boxes(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                
                int curr = board[i][j];
                
                if(rows[i].count(curr) || cols[j].count(curr) || boxes[(i/3)*3 + (j/3)].count(curr)){ // if duplicates found in row , col or boxes then return false
                   
                    return false;
                }
                //if we don't found the value then after that we must enter this value in our set
                rows[i].insert(curr);
                cols[j].insert(curr);
                boxes[(i/3*3) + j/3].insert(curr);
            }   
        }
        return true;    
    }
};