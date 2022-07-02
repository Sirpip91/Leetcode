class Solution {
public:
    int subtractProductAndSum(int n) {
        
        
        //sum 
        //products
        
        int sum =0;
        int product =1;
        //individual digits
        
        int digit;
        while(n>0)
        {
            digit = n%10;
            
            product = product*digit;
            sum = sum+digit;
            
            n = n/10;
            
        }
        
        return product - sum;
        
    }
};
