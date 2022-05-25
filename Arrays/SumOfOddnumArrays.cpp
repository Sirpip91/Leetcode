class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        //odd length.
        //each number by itself should be added together once.
     
        
        int n = arr.size();
        int sum=0;
        
        for(int i =0 ;i<n; i++)
        {
            int sub =0;
            for(int j = i;j<n;j++)
            {
            
                sub+=arr[j];
                if((j-i+1)%2 != 0)
                {
                    sum+=sub;
                }
            }
        }
        
        
     
        return sum;
    }
};
