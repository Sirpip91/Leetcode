class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
      
      //DYNAMIC PROGRAMMING :(
      
        int c = 1 , r = 1;
        for(c;c<grid[0].size();c++){
            grid[0][c] += grid[0][c - 1];
        }
        for(r ; r < grid.size();r++){
            grid[r][0] += grid[r - 1][0];
        }
        
        for(int i = 1 ; i < grid.size() ; i++){
            for(int j = 1 ; j < grid[0].size() ; j++){
                grid[i][j] += min(grid[i-1][j] , grid[i][j-1]);
            }
        }
        
        return grid[grid.size()-1][grid[0].size()-1];
        
    }
};
