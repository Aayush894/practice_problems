From <https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/> 

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> para; // declare a stack memory 
        int counter = 0 ; // initialise counter with zero 
        for(int i = 0 ;i < s.size() ;i++) // traverse string
        {
            if(s[i] == '(') // if ( then push
            para.push('(');
            else if(!para.empty() && para.top() == '(' && s[i] == ')' )  // if ) comes over ( then pop 
            para.pop() ; 
            else 
            counter++ ;
        }
        return para.size() + counter; // return wrong ) paranthesis + extra ( paranthesis 
    }
};

From <https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/992408644/> 
