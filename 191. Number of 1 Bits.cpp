class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 1 ; 
        if(n == 0)
        return 0 ;
        
        while(n > 1)
        {
            count += n%2 ;
            n = n/2 ;
        }
        return count; 
    }
};

From <https://leetcode.com/problems/number-of-1-bits/submissions/960901278/?envType=study-plan-v2&envId=top-interview-150>
