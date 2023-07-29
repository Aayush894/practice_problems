class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> ans ; 
       int n = numbers.size() ; 
       int start = 0 ; 
       int end = n -1 ; 
       while(start < end )
       {
           if(numbers[start] + numbers[end] < target)
           start++ ; 
           else if(numbers[start] + numbers[end] > target) 
           end-- ; 
           else 
           break ;
       }
       ans.push_back(start+1) ; 
       ans.push_back(end+1) ;
       return ans ; 
    }
};

From <https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/953064228/?envType=study-plan-v2&id=top-interview-150> 
