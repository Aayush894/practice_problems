From <https://leetcode.com/problems/sort-colors/description/> 

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int count_0 = 0 ,count_1 = 0; //count 0 and 1 and remaining are 2 ;
      for(int i = 0 ; i < nums.size();i++)
      {
        if(nums[i] == 0)
        count_0++ ; 
        else if(nums[i] == 1)
        count_1++ ;
      }
      for(int i = 0 ; i < nums.size() ;i++)
      {
        if(count_0) //place 0 in nums[i] until count_0 is not 0
        {
          nums[i] = 0 ;
          count_0-- ; 
          continue ;
        }
        else if(count_1) //place 1 in nums[i] after 0 until count_1 is not 0 
        {
          nums[i] = 1 ; 
          count_1-- ;
          continue ;
        }
        nums[i] = 2 ; //else place 2 in all remaining ones 
      }
    }
};

From <https://leetcode.com/problems/sort-colors/submissions/967274000/> 
