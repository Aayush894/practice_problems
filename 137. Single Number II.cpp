class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0; 
        int i = 0; 
        sort(nums.begin(),nums.end()) ; // sort the vector 
        /* reducing the single number II problem into single number problem */ 
        while(i < nums.size()) 
        {
            if(i%3 == 1)
            {
                ans ^= nums[i] ; 
                i = i + 2; // skipping the third same value 
            }
            else 
            {
                ans ^= nums[i] ;
                i++ ;
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/single-number-ii/submissions/961105115/?envType=study-plan-v2&envId=top-interview-150>
