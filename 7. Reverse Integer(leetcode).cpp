From <https://leetcode.com/problems/reverse-integer/submissions/937482262/> 

class Solution {
public:
    int reverse(int x) {
        int sign = 0 ; 
        if(x > 0) 
        sign = 1 ; 
        else 
        sign = -1 ; 
        int temp = abs(x) ; 
        long rev_x = 0 ; 
        while(temp)
        {
            int d = temp % 10 ; 
            rev_x =( rev_x * 10 ) + d; 
            temp = temp / 10 ; 
        }
        rev_x = rev_x * sign ;
        if(rev_x > INT_MAX || rev_x < INT_MIN)
        return 0 ;  
        return rev_x ; 
        
    }
};
