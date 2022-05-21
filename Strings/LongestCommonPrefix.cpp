class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        //get size of vector
        int n = strs.size();
        //sort the vector
        sort(strs.begin(), strs.end());
        
        
        //store each word in 
        string a = strs[0];
        //last string
        string b = strs[n-1];
        
        //anser;
        string ans = "";
        
        //go through each char 
        for(int i = 0; i<a.size(); i++)
        {
            //if char of first string and last string are equal push it to answer
            if(a[i] == b[i])
            {
                ans.push_back(a[i]);
            }
            else
            {
                break;
            }
        }
                return ans;
    }
};
