From <https://leetcode.com/problems/longest-valid-parentheses/description/> 
 
class Solution {
public:
    int longestValidParentheses(string s) {
        int len = 0,max_len = 0 ; 
        stack<int> st ;// maintian a stack 
        st.push(-1) ; // store -1 at the beginning of the stack 
        for(int i = 0 ;i < s.size();i++) // traverse the string 
        {
            if(s[i] == '(' )  // if '(' comes then push into stack 
            st.push(i) ; // push the index of '(' into stack 
            else
            {
                st.pop() ; // if ')' comes then pop index of '(' from stack 
                if(st.empty()) 
                st.push(i) ; // if stack is empty then push index i into the stack 
                 
                len = i - st.top() ; // length is given by difference of last second '(' and st.top()
                max_len = max(len,max_len) ; // find max length 
            }
        }
        return max_len  ;
    }
};

From <https://leetcode.com/problems/longest-valid-parentheses/submissions/1004296090/> 
