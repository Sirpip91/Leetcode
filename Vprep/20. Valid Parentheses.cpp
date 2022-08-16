class Solution {
public:
    bool isValid(string s) {
        
        //create a stack
        stack<char> st;
    
        //itarate through string
        for(int i=0; i<s.size();i++)
        {
            //if we have a opening push it to stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
                //if we have a closing start checking
                if(s[i] ==')' || s[i] == '}' || s[i] == ']')
                {
                    //if empty return false
                    if(st.empty())
                        return false;
                        //if curr char is closing ) and the top is not openingreturn false;
                    else if(s[i] == ')'&& st.top() != '(')
                        return false;
                    else if(s[i] == '}' && st.top()!= '{')
                        return false;
                    else if(s[i] == ']' && st.top()!= '[')
                        return false;
                    else st.pop();
                }
        }
        //if the string is empty at the end return true else false
        if(st.empty())
            return true;
        else
            return false;
        
    }
};
