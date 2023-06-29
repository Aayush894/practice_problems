From <https://leetcode.com/problems/missing-number/description/> 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int total_sum = (n *(n + 1))/2 ;
        int i ,sum = 0 ; 
        for(i = 0 ;i < nums.size();i++)
        {
            sum = sum + nums[i] ; 
        }
        return total_sum - sum ;
    }
};

From <https://leetcode.com/problems/missing-number/submissions/982487043/>
