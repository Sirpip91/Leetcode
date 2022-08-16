class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
    
        //add both arrays into one and sort
        for(int i = 0; i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        
        //get the mid
        int mid = nums1.size()/2;
        
        //setup ans
        double ans = 0.0;
        
        //if the size is even
        if(nums1.size() % 2 == 0)
        {
            //ans is middle plus 1 /2
            ans = double(nums1[mid] + nums1[mid-1])/2;
        }
        else
        {
            //if size is odd ans is middle
            ans = nums1[mid];
        }
        //return the ans
        return ans;
        
        
    }
};
