From <https://leetcode.com/problems/valid-parentheses/description/> 

class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        for(const char ch : s)
        {
            if(ch == '(')
            st.push(')') ;
            else if(ch == '{')
            st.push('}') ; 
            else if(ch == '[')
            st.push(']') ;  
            else 
            {
                if(st.empty() || Pop(st) != ch) 
                return false ; 
            }
        }
        if(st.empty())
        return true ; 
        return false ;  
}
private:
  int Pop(stack<char>& sta) {
    int c = sta.top();
    sta.pop();
    return c;
  }
};
