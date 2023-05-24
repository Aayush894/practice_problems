From <https://leetcode.com/problems/contains-duplicate-ii/submissions/956410518/> 

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> mp ; 
    for(int i = 0;i < nums.size();i++) //O[N] -> TC
    {
        if(mp.find(nums[i]) != mp.end())
        {
            if(abs(mp[nums[i]] - i) <= k)
            return true ; 
        }
        mp[nums[i]] = i ; 
    } 
    
    return false ;  
    }
};
