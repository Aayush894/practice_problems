class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg = 0 ; 
        int end = nums.size() - 1 ;  // for end index  
        int mid ; 
        while(beg <= end) // binary search
        {
            mid = (beg + end) / 2 ;
            if(nums[mid] > target)
            end = mid - 1; 
            
            else if(nums[mid] < target)
            beg = mid + 1 ; 
            else 
                return mid ; 
                    
        }
        return beg; //gives the estimated position of the target 
        
    }
};
