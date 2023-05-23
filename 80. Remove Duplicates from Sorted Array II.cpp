From <https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/949651533/?envType=study-plan-v2&id=top-interview-150>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0 ; 
        for(const int n :nums) 
        {
            if(count <= 1 || n > nums[count-2])
            nums[count++] = n ; 
        }
        return count ; 
    }
};
