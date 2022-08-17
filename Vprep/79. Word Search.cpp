class Solution {
public:
    //create a function dfs
    bool dfs(vector<vector<char>>& board, string word, int i,int j, int len )
    {
        if(len == word.size())
            return true;
        
        if(i<0|| i>=board.size() || j<0 || j>=board[i].size() || board[i][j] != word[len])
            return false;
        
        // if we found the first character in board then store the charcter in temp
        char temp = board[i][j];
        
        board[i][j] = '1';
        
        bool found = dfs(board, word, i - 1, j, len + 1) ||  //up
                     dfs(board, word, i + 1, j, len + 1) ||  //down
                     dfs(board, word, i, j - 1, len + 1) ||  //left
                     dfs(board, word, i, j + 1, len + 1);  
        
        // then change the visited value by original character for other searches
        board[i][j] = temp;

        return found;
        
    }
    
    //DFS BACKTRACKING
    
    bool exist(vector<vector<char>>& board, string word) {
        
        
        for(int i = 0;i<board.size();i++)
        {
            for(int j = 0; j<board[i].size();j++)
            {
                if(board[i][j] == word[0] && dfs(board,word,i,j,0))
                    return true;
            }
        }
        
        return false;
    }
};
