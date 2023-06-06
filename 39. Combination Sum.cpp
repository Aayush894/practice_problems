From <https://leetcode.com/problems/combination-sum/submissions/963360812/?envType=study-plan-v2&envId=top-interview-150> 
( for loop solution)
class Solution {
public:
/* apply backtracking */
    void solve(vector<int> candidates,vector<int> result,int index ,int target,int sum,vector<vector<int>> &ans){
        if(sum == target) // base case when sum is equal 
        {
            ans.push_back(result) ; //add the result in the ans
            return ;
        }
        if(index >= candidates.size() || sum > target) // base case when there is no chance of metting the condition or sum is not going to equal to target .
        {
            return ;
        }
        // generate combinations
        for(int i = index;i < candidates.size();i++)
        {
            result.push_back(candidates[i]) ; //add element at index i in the result vector
            sum += candidates[i] ; //increase sum by candidates[i] ;
            solve(candidates,result,i,target,sum,ans) ; //recursive call for the solve at result and dont increse the value of index hence repetition is allowed 
            sum -= candidates[i] ; //nutrilise the effect of previous step in bactracking
            result.pop_back() ; //pop back the added iteration 
        /* if we not pop then at the next iteration the output become [2,3] instead of [3] */ 
            
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ; 
        vector<int> result ;
        int index = 0 ; 
        int sum = 0 ;
        solve(candidates,result,index,target,sum,ans) ;
        return ans ;
    }
};
