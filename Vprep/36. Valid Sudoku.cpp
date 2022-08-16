class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //https://leetcode.com/problems/valid-sudoku/discuss/2423241/C%2B%2B-oror-Best-Explanation-oror-Simple-oror-100-faster
        
        vector<set<int>> row(9),col(9),box(9);
        
        for(int i=0;i< 9;i++)
        {
            for(int j = 0;j < 9;j++)
            {
                //if not a space
                if(board[i][j] != '.')
                {
                    //convert char by - '0'
                    int num = board[i][j] - '0';
                    
                    //
                    if(row[i].count(num) || col[j].count(num) || box[(i/3)*3 + (j/3)].count(num))
                    {
                        return false;
                    }
                    
                    //insert the num
                    row[i].insert(num);
                    col[j].insert(num);
                    box[(i/3)*3 + (j/3)].insert(num);
            
                }
            }
        }
        
        return true;
    }
};
