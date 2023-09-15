From <https://leetcode.com/problems/validate-stack-sequences/description/> 

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st ;
        // use two pointer approach 
        int i = 0,k= 0 ;// i-> pushed , k -> popped 
        while(i <= pushed.size() && k < popped.size())
        {
            if(i == pushed.size() && st.top() != popped[k]) // it means we push all the values but no pop seq form 
            return false ;
            
            // if stack is not empty and top of stack point to popped element then pop 
            if(!st.empty() && st.top() == popped[k]){
                st.pop();
                k++ ; 
            }
            else{// else push 
                st.push(pushed[i]) ; 
                i++ ;
            }
        }
        if(st.size() == 0) // if stack is empty then return true
            return true ;
        else  //else false 
            return false ;
    }
};

From <https://leetcode.com/problems/validate-stack-sequences/submissions/993174268/> 
