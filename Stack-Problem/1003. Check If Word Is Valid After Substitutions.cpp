From <https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/> 

class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        for(int i = 0 ;i < s.size();i++){
            if(st.empty() && s[i] != 'a') //base case if stack is empty and b or c comes than there is no possibility of the acceptance of the string 
                return false ;
            else if(s[i] == 'c'){
                if(st.top() == 'b'){ // if c comes and top_stack -> b 
                    st.pop() ; // than pop b 
                    if(st.top() == 'a') // if after b , a comes 
                        st.pop() ; // pop a 
                    else{ // push b c 
                        st.push('b') ; 
                        st.push(s[i]) ; 
                    }
                }
                else{ // if 
                    st.push(s[i]) ; //push c
                }
            }
            else{
                st.push(s[i]) ; 
            }
        }
        // if after all the operation the stack is empty then return true 
        if(st.empty()){
            return true ;
        }
        else{
            return false ;
        }
    }
};

From <https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/submissions/995446199/>
