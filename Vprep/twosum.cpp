class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        
        //O(n) Time complexity;
        //O(n) space complexity;
        
        
        for(int i =0; i<n;i++)
        {
           int sval = target - nums[i];
            
            if(mp.find(sval) != mp.end())
            {
                v.push_back(i);
                //add the sval index located at ->sedcond
                v.push_back(mp.find(sval)->second);
            }else
            {
                //add nums[i] with index i
                mp[nums[i]] = i;
            }
        }
        
        return v;
    }
};
