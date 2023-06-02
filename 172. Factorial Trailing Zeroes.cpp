from<https://leetcode.com/problems/factorial-trailing-zeroes/submissions/962486191/?envType=study-plan-v2&envId=top-interview-150> 

class Solution {
public:
    int trailingZeroes(int n) {
        // total power of 5 decide the no of trailing zeroes 
        // power of 2 always greater than power of 5 in factorial 
        // for eq -  power of 5 in n  = n/5 + n/5^2 + n/5^3 + ......
        // eg = power of 5 in 100 = 100/5 + 20/5 + 4/5 = 24 
        int count = 0 ;
        while(n) 
        {
            count =count + n/5 ; 
            n = n/5 ;
        }
        return count ;
    }
};
