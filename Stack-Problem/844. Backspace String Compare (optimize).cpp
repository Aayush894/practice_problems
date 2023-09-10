(optimise by using string in place of stack)
From <https://leetcode.com/problems/backspace-string-compare/description/> 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // optimize the code by using string   
        string text1;  
        string text2; 
        // find text 1 
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == '#')
            {
                if(text1.size())
                text1.erase(text1.size()-1) ; 
                continue ;
            }
            text1 += s[i] ; 
        }
        // find text2 
        for(int i = 0 ;i < t.size();i++){
            if(t[i] == '#')
            {
                if(text2.size())
                text2.erase(text2.size()-1) ; 
                continue ;
            }
            text2 += t[i] ; 
        }
        if(text1 == text2)
            return true ;
        else 
            return false ;
    }
};

From <https://leetcode.com/problems/backspace-string-compare/submissions/992325981/>
