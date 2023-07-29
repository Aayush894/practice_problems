class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size() ; 
        int sum = nums[0],min_len = n ;
        int start = 0 ,end = 0 ,k= 0;  // start and end pointer 
        while(end < n ) //end case
        {
            if(sum >= target) //if sum is greater or equal to target ; 
            {
                min_len = min(end - start+1,min_len) ;
                sum = sum - nums[start] ;  // if found the sum the slide the start window forward 
                start++ ; 
                k++ ; // increase start pointer 
            }
            else 
            {
                end++ ; // if not found the slide the end window forward 
                if(end != n) // if end window is greater than index 
                sum = sum + nums[end] ; 
            }
        }
        if(k == 0)
            return 0 ; 
        
        return min_len ; 
    }
};

From <https://leetcode.com/problems/minimum-size-subarray-sum/submissions/953763186/>
