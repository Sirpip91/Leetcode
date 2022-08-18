class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        //Time complexity O(n*m) where n is row and m is col
        //Space complexity is O(n*m); recursive
        int count = 0;
        //row
        for(int i =0; i<grid.size();i++)
        {
                                //col
            for(int j = 0; j<grid[0].size();j++)
            {   //if we find a island call function
                if(grid[i][j] == '1')
                {
                    fnc(grid,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
    
    
    void fnc(vector<vector<char>>& grid, int i, int j)
    {
        //check out of bounds
        if(i<0 || j<0 || i>= grid.size() || j>= grid[0].size())
        {
            return;
        }
        //if we find a 0 return recurisve
        if(grid[i][j] == '0')
            return;
        
        //make the 1 a 0
        grid[i][j] = '0';
        
        //check horizontal
        fnc(grid,i+1,j);
        fnc(grid,i-1,j);
        
        //check vertical
        fnc(grid,i,j+1);
        fnc(grid,i,j-1);
    }
};
