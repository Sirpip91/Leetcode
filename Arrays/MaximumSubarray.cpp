class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        //store the rsult
        int res = INT_MIN;
        int ans =0;
        //go through array
        for(int i =0;i<n; i++)
        {
            //start adding each index and store in ans
            ans +=nums[i];
            
            //if current ans is < current index number
            if(ans<nums[i])
                    //replace ans with current index number             
                ans=nums[i];
            // THEN check if result is < answer
            if(res<ans)
                //if true store answer in result
                res = ans;
        }
        //at the end the max result from ans will be returned.
        return res;
    }
};
