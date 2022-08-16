class Solution {
public:
    int myAtoi(string s) {
        
        long long int sign = 1;
        long long int base = 0;
        int i = 0;
        //skip over spaces
        while(s[i] == ' ')
            i++;
        //if we get a sign save it to the sign
        if(s[i] == '-' || s[i] == '+')
        {
            sign = 1 - 2 * (s[i++] == '-');
        }
        
        //while we are reading numbers
        while(s[i] >= '0' && s[i] <= '9')
        {
            base = 10 * base + (s[i++] - '0');
            
            if(base>INT_MAX)
            {
                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
        }
        
        return base  * sign;
        
    }
};
