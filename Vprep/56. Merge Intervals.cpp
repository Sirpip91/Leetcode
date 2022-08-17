class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        //Time Complexity of O(nlogn)
        //space complexity O(n) where n is amount of intervals in vector.
        
        
        //sort the array
        sort(intervals.begin(),intervals.end());
        
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i =0; i<n; i++)
        {
            // if we have nothing add it to the vector
            if(ans.empty())
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                //save the last end with &v the revference.
                vector<int> &v = ans.back();
                int y = v[1]; //end of prev
                //compare prev and curr.
                
                //if the curr  <= y we have overlap.
                if(intervals[i][0] <= y)
                {
                    // make the last interval max of the two
                    v[1] = max(y,intervals[i][1]);
                }
                else
                {
                    //no overalp.
                    ans.push_back(intervals[i]);
                }
                
            }
        }
        
        return ans;
        
        
    }
};
