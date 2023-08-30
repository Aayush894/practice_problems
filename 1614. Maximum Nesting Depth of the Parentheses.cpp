From <https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/> 

class Solution {
public:
    int maxDepth(string s) {
        // stack<char> para  ;
        int count = 0;
        int max_count = 0 ;
        for(int i = 0;i < s.size();i++){
            if(s[i] == ')')
            {
                // para.pop() ; 
                count-- ;
            }
            else 
            {
                 if(s[i] == '(')
                {
                    // para.push('(') ; 
                    count++ ;
                }
                if(max_count < count) 
                max_count = count ;
            }
        }
        return max_count ;
    }
};

From <https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/992092766/> 
