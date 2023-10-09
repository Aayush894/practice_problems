From <https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/>
  
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans ; 
        int first = -1 , last = -1 ; 
        int start = 0, end = nums.size()-1 ;
        while(start <= end)
        {
            int mid = end - (end - start)/2 ; 
            if(nums[mid] < target)
            {
                start = mid+1 ; 
            }
            else if(nums[mid] > target){
                end = mid-1 ; 
            }
            else{
                int index = mid ;
                while(index > 0 && nums[index-1] == nums[index]){
                    index-- ; 
                }
                first = index ;
                index = mid ; 
                while(index < nums.size()-1 && nums[index] == nums[index+1]){
                    index++ ;
                }
                last = index ;
                break ;
            }
        }

        return {first,last} ;  
    }
};

From <https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1070525663/> 
