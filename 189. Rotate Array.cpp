From <https://leetcode.com/problems/rotate-array/submissions/950888399/?envType=study-plan-v2&id=top-interview-150> 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums1 = nums; 
        int n = nums.size() ; 
        if((k != 0)&&(n > 1))
        {
            for(int i = 0;i < n; i++ )
            {
                nums[(k+i)%n] = nums1[i] ;  
            }
        }
    }
};
