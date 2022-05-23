class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
       
        int n = nums.size();
        vector<int> target;

        for(int i =0 ;i<n; i++)
        {
            //insert(begin()+amountfromindex, the number corresponding to the index)
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;
    }
};
