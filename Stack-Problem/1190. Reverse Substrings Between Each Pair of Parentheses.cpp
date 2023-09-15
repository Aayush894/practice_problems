From <https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/> 

class Solution {
public:
    string reverseParentheses(string s) {
        //using stack 
        stack<char> st ;
        string ans ;
        // traverse the string 
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == ')') // if close braces comes then execute
            {
                while(st.top() != '('){ //store the string in reverse order 
                    ans += st.top()  ; // (dcba) 
                    st.pop() ; 
                }
                st.pop() ; // pop the '(' braces from stack 
                
                for(int j = 0;j < ans.size();j++){ // push the reverse string into stack
                    st.push(ans[j]) ;// stack contain (d,c,b,a->top)
                }
                ans.erase() ; // clear the ans vector 
            }
            else 
            {
                st.push(s[i]) ; //else push the char into the stack 
            }
        }
        //after all the processing the stack contain the ans in reverse order  
        while(!st.empty()){
            ans = st.top() + ans; // add the result into ans vector in reverse order
            st.pop() ;
        }
        return ans ; // return ans (dcba)
    }
};

From <https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/submissions/992870170/> 
