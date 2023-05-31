From <https://leetcode.com/problems/single-number/submissions/961088648/?envType=study-plan-v2&envId=top-interview-150> 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() ; 
        int single_num = 0 ; 
        for(int i = 0 ;i < nums.size();i++)
        {
            single_num = single_num ^ nums[i] ; 
        }
        return single_num ;
    }
};
