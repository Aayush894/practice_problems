From <https://leetcode.com/problems/find-the-duplicate-number/description/?envType=daily-question&envId=2023-09-19>
  
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Fast-Slow Pointers Approach (Floyd's Cycle Detection) 
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

From <https://leetcode.com/problems/find-the-duplicate-number/submissions/1053126745/?envType=daily-question&envId=2023-09-19> 
