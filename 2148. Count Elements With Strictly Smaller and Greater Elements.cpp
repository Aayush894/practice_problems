From <https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/submissions/965781403/> 

class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size() < 3) // base case 
        return 0 ;
        sort(nums.begin(),nums.end()) ; 
        if(nums[nums.size() -1] == nums[0]) // if min_value == max_value 
        return 0 ;
        int count = 2 ,i = 0 ;
        while(i < nums.size()-1 && nums[i + 1] == nums[i]) // count the no of element having maximum value
        {
            count++ ; 
            i++ ;
        }
        i = nums.size() -1 ;
        while(i > 0 && nums[i-1] == nums[i]) // count the no of element having minimum value
        {
            count++ ;
            i-- ;
        }
        
        return (nums.size() - count) ;
    }
};
