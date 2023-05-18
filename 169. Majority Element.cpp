From <https://leetcode.com/problems/majority-element/submissions/950876340/?envType=study-plan-v2&id=top-interview-150> 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin(),nums.end()) ; 
        
        return nums[(n-1)/2] ; 
    }
};
