class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //sort the contents
        sort(nums.begin(),nums.end());
        
        
        int n = nums.size() -1;
        
        //go through vector 
        for(int i =0; i<n; i++)
        {
        //if there are two numbers the same next to each other        
            if(nums[i] == nums[i+1])
                return true;
            
        }
        return false;
    }
};
