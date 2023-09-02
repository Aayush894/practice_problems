From <https://leetcode.com/problems/permutations/description/?envType=study-plan-v2&envId=top-interview-150> 
  
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ; 
        vector<int> result ; 
        solve(nums,result,ans) ;
        return ans ; 
    }
private: 
/* apply backtracking */ 
    void solve(vector<int> nums,vector<int> result,vector<vector<int>> &ans){
        if(nums.empty()) //base case if nums is empty
        {
            ans.push_back(result) ; //add result in the ans
            return ; 
        }
        for(int i = 0 ;i < nums.size();i++) 
        {
            vector<int> temp = nums ;// store nums in temp 
            result.push_back(nums[i]) ; // add the elment in that index in the result 
            temp.erase(temp.begin()+i) ; // erase that element from the temp vector
            solve(temp,result,ans); //recursive call  
            result.pop_back() ;//pop the element from the result 
        /*if we dont pop then the result become [1,2] in the second iteration instead of [2]*/
        }
    }
};

From <https://leetcode.com/problems/permutations/submissions/963012011/?envType=study-plan-v2&envId=top-interview-150>
