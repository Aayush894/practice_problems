From <https://leetcode.com/problems/fibonacci-number/submissions/961777404/> 

class Solution {
public:
    int fib(int n) {
        int ans ;
        int first = 0 , second = 1 ,third ; 
        if(n == 0) 
        return first ; 
        else if(n == 1) 
        return second ; 
        else 
        {
            for(int i = 0 ;i < n -1 ;i++)
            {
                third = first + second ;
                first = second ;
                second = third ;
            }
        }
        return third ; 
    }
};
