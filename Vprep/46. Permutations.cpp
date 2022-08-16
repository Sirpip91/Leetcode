class Solution {
public:
    void abc(vector<int>&nums,int l,int r,vector<vector<int>> &finalans){    
        if(l==r){
            finalans.push_back(nums);
        }
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            abc(nums,l+1,r,finalans);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> finalans;
        int n= nums.size();
        abc(nums,0,n-1,finalans);
        return finalans;
    }
};
