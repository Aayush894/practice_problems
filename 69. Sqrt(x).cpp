class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)// base case
        return 0 ;
        long long high = x ,low = 1;
        long long mid ;  
        // apply binary search to find the appropriate int value 
        while(low <= high)
        {
            mid = (high + low + 1 )/2 ;
            if(mid*mid == x)
            return mid ; 
            else if(mid*mid > x)
            high = mid - 1 ;
            else 
            low = mid + 1 ;
        } 
        return high ;
    }
};

From <https://leetcode.com/problems/sqrtx/submissions/961578360/?envType=study-plan-v2&envId=top-interview-150>
