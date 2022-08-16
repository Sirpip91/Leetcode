class Solution {
public:
    string intToRoman(int num) {
        
        //setup dictionary largest->smallest
        int numbers [13] = {1000, 900,500,400,100,90,50,40,10,9,5,4,1};
        string romans[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        //if number is 0
        if(num == 0)
            return 0;
        
        //setup answer srting
        string s;
        
        //go through the list of dictionarys
        for(int i=0; i<13; i++)
        {
            //while the number is greater than dictionary numbers
            while(num>=numbers[i])
            {
                s = s + romans[i];
                num = num-numbers[i];
            }
            
            if(num == 0)
                break;
            
        }
        
        return s;
    }
};
