class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int>v;
            
        int n = nums.size();
        //i = freq
        //j = val
        
        //WATCH THE I += 2    i kept putting i+2 instead of i+=2 XD
        for(int i=0; i<n; i+=2)
        {
            int freq = nums[i];
            
            for(int j =0 ;j<freq; j++)
            {
                v.push_back(nums[i+1]);
            }
            
        }
      return v;
    }
};
