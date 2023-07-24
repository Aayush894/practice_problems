From <https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1> 
  
//User function template for C++
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        /* optimized stack approach O(N) */
        stack<int> st ;
        // Step1 : push all person in the stack
        for(int i = 0 ;i < n;i++)
        {
            st.push(i) ; 
        }
        // Step2: check until only one element is remaining in the stack
        while(st.size() > 1){
            int a = st.top() ; 
            st.pop() ;
            int b = st.top() ; 
            st.pop() ;
            if(M[a][b] == 1) // a knows b then a is not celebrity 
            {
                st.push(b) ; 
            }
            else // b knows a then b is not celebrity 
            {
                st.push(a) ;
            }
        }
        // one person remaining in the stack is potential celebrity
        // check for row count and column count 
        int cand = st.top() ; 
        int RowsZero = 0 ; 
        int ColsOnes = 0 ;
        for(int i = 0;i < n;i++){
            if(M[cand][i] == 0)
            RowsZero++ ; 
            if(M[i][cand] == 1)
            ColsOnes++ ;
        }
        if(RowsZero == n && ColsOnes == n-1)
        return cand ;
        else 
        return -1 ;
        
    }
};

From <https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1> 
