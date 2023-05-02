From <https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/942184449/> 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ; 
        int first = -1 , last = -1 ; 
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i] < target)
            first = i ; 
            else if(nums[i] == target)
            last = i ;
            else 
            break ; 
        }
        if(last == -1 )
        first = -1 ;
        else  
        first++ ; 
        
        ans.push_back(first) ; 
        ans.push_back(last) ; 
        return ans ;  
    }
};
