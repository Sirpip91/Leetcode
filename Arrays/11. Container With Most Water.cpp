class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        //pntr at start and at end.
       int i=0, j=height.size()-1, m = INT_MIN;
        
        //go through array
        while(i!=j){
            //if the left is < right
            if(height[i] < height[j]){
                //area = left * right- stuff to make equal.
                int area = height[i] * (j-i);
                //m= max of area and m
                m = max(m, area);
                i++;
            }else {
                //if left>right 
                //area = right * left - stuff to make equal.
                int area = height[j] * (j-i);
                m = max(m, area);
                j--;
            }
        }
        //max area.
        return m;
        
    }
};
