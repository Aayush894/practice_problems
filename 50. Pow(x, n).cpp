class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1; 
        int sign = 0; 
        if(n < 0)
        {
            sign = 1;
            n = abs(n) ; 
        }
        while(n)
        {
            if(n & 1 == 1) // (n%2 == 1)
            ans *= x ; 
            x *= x ;
            n = n/2 ; 
        }
        if(sign)
        {
            ans = 1 / ans ;
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/powx-n/submissions/961589684/?envType=study-plan-v2&envId=top-interview-150>
