/*

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].




*/


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        
        int pnt =0;   
        int pnt1 =n;
        int full = 2*n;
        
        for(int i =full/2 ;i<full;i++)        //O(n)
        {
            v.push_back(nums[pnt]);
            v.push_back(nums[pnt1]);
            ++pnt;
            ++pnt1;
        }
        
        return v;
        
    }
};
