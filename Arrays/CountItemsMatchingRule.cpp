class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    
    int index = 0;
        int count = 0;
        
        //Translate rule key to index 1 2 or 3
        if(ruleKey == "type")
            index=0;
        else if(ruleKey == "color")
            index=1;
        else 
            index=2;
   
        //go through matrix and check each row  has the right value for column.
        for(int i =0; i<items.size();i++)
        {
            //items[row][column]
            if(items[i][index] == ruleValue)
                count++;
            }
  return count; 
    }
    
};
