class Solution {
public:
    stack<int> st ;
    int evalRPN(vector<string>& tokens) {  
    int ans = stoi(tokens[0]);
    for(int i = 0 ;i < tokens.size();i++)
    {
        if(tokens[i] == "+" ||tokens[i] == "-" ||tokens[i] == "*" ||tokens[i] == "/")
        {
            ans = evaluate(tokens[i]) ; 
        }
        else 
        {
            int temp = stoi(tokens[i]) ;
            st.push(temp) ; 
        } 
    }
    return ans ; 
 }
    int evaluate(string oper) 
    {
        int a = st.top() ; 
        st.pop() ; 
        int b = st.top() ; 
        st.pop() ; 
        
        if(oper == "+") 
        {
            st.push(b+a) ;
        }
        else if(oper == "-") 
        {
            st.push(b-a) ;
        }
        else if(oper == "*") 
        {
            st.push(b*a) ;
        }
        else 
        {
            st.push(b/a) ;
        }
        return st.top();
    } 
};

From <https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/962027751/?envType=study-plan-v2&envId=top-interview-150>
