class Solution {
public:
    void sortColors(vector<int>& nums) {
    
        //3 pointer approach 
        //Time complexity O(N)
        //Space Complexity O(1);
    int i = 0;
    int s = 0;
    int e = nums.size()-1;
    
    while(i<=e){
        
        if(nums[i]==0){
            swap(nums[i],nums[s]);
            i++;
            s++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[e]);
            e--;
        }
        else{
            i++;
        }
    }
    
    
}
};
