From <https://leetcode.com/problems/backspace-string-compare/description/> 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // maintain two stack as it is a stack question 
        stack<int> text1;  
        stack<int> text2; 
        // find text 1 
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == '#')
            {
                if(!text1.empty())
                    text1.pop() ; 
                continue ;
            }
            text1.push(s[i]) ; 
        }
        // find text2 
        for(int i = 0 ;i < t.size();i++){
            if(t[i] == '#')
            {
                if(!text2.empty())
                    text2.pop() ; 
                continue ;
            }
            text2.push(t[i]) ; 
        }
        // check for equality 
        while(!text1.empty() && !text2.empty())
        {
            if(text1.top() == text2.top()) 
            {
                text1.pop() ; 
                text2.pop() ; 
            }
            else  
                return false ;
        }
        // if both stack is empty then return true 
        if(text1.empty() && text2.empty())
            return true ;
        else 
            return false ;
    }
};

From <https://leetcode.com/problems/backspace-string-compare/submissions/992322425/> 
