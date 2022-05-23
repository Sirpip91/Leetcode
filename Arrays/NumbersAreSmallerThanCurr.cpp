class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        int cnt =0;
        for(int i =0;i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(nums[i] > nums[j])
                    cnt++;
                
                
            }
            v.push_back(cnt);
            cnt =0;
        }
        return v;
    }
};
