From <https://leetcode.com/problems/clumsy-factorial/description/> 

class Solution {
public:
    int clumsy(int n) {
        //( * , / , + , - ) -> pattern 
        int ans = 0 ; 
        stack<int> st ;
        int count = 0 ;
        int temp ;
        for(int i = n ;i >= 1 ;i--)
        {
            if(count%4 == 0)
            {
                temp = i ; 
                count++ ;
            }
            else if(count%4 == 1){
                temp *= i ;
                count++ ;
            }
            else if(count%4 == 2){
                temp /= i ;
                count++ ;
            }
            else if(count%4 == 3){
                // for first term it is plus and for other term it behaves likes - 
                if(count == 3)
                temp += i ;
                else 
                temp -= i ;
                count++ ; 
                st.push(temp) ;  
            }
        }
        // if block containing push operation is not reached or executed -> for remaining section in the series
        if(count%4 != 0)
        st.push(temp) ; 
        // pop till 1 term is left in stack st 
        while(st.size() > 1){
            ans += st.top();
            st.pop() ; 
        }
        return (st.top() - ans) ;
    }
};

From <https://leetcode.com/problems/clumsy-factorial/submissions/995189038/> 
