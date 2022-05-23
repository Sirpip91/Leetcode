class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int n = candies.size();
        //Important just learned this int max = *max_element(begin(),end())
        int max = *max_element(candies.begin(),candies.end()); 
        
        for(int i =0; i<n; i++)
        {
            if(candies[i] + extraCandies >= max)
            {
                v.push_back(true);
            }
            else v.push_back(false);
        }
        return v;
    }
};
