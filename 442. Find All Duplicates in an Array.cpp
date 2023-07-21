From <https://leetcode.com/problems/find-all-duplicates-in-an-array/description/> 

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { 
        vector<int> dup(nums.size()+1) ; 
        vector<int> ans ;
        for(int i = 0 ;i < nums.size();i++){
            if(dup[nums[i]] == 1)
            ans.push_back(nums[i]) ; 
            dup[nums[i]]++ ; 
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/1000026344/> 
