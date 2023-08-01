class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; // sort the given vector 
        int n = nums.size() ;  
        vector<vector<int>> ans ; // ans 
        int index = 0,start,end; // initialise three pointers 
        while(index < n - 2)
        {
            if(index >= 1 && nums[index] == nums[index-1]) // eliminate equal values of index pointer 
            {
                index++ ; 
                continue; 
            }
            
            start = index + 1 ; // initialize j 
            end = n - 1 ; // initialize k 
            while(start < end) // apply two sum approach 
            {
                if((nums[index] + nums[start] + nums[end]) > 0) 
                end-- ; 
                else if((nums[index] + nums[start] + nums[end])< 0)
                start++ ;
                else
                {
                    vector<int> triplets ={nums[index],nums[start],nums[end]} ; //vector triplet 
                    ans.push_back(triplets) ;  
                    start++ ; 
                    end-- ; 
                    while(start < end && nums[start] == nums[start-1]) start++ ;//eliminate equal values of start 
                    while(start < end && nums[end] == nums[end+1]) end-- ;//eliminate equal values of end
                }
        
            }
            index++ ; 
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/3sum/submissions/953405983/> 
