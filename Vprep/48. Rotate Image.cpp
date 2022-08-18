class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int layers = n/2;
        
      //O(N*N)
      //O(1);
      
        for(int layer = 0; layer<layers; layer++)
        {
            int start = layer;
            int end = n-1-layer;
            
            for(int i=start; i<end;i++)
            {
                // top
                int temp = matrix[start][i];
                // left to top
                matrix[start][i] = matrix[n-1-i][start];
                //bottom to left
                matrix[n-1-i][start] = matrix[end][n-1-i];
                //right to bottom
                matrix[end][n-1-i] = matrix[i][end];
                // top to right
                matrix[i][end] = temp;
            }
        }
        
    }
};
