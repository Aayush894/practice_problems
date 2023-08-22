class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {\
       /* Bitwise-AND of any two numbers will always produce a number less than or equal to the smaller number. */ 
        int ans = right ; 
        while(right > left) 
        {
            ans = right & (right -1) ; 
            right = ans ;
        }
         
        return ans ; 
    }
};

From <https://leetcode.com/problems/bitwise-and-of-numbers-range/submissions/961303406/?envType=study-plan-v2&envId=top-interview-150>
