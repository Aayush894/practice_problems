From <https://leetcode.com/problems/combination-sum-iv/description/?envType=daily-question&envId=2023-09-09> 
  
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        /* using recursive to find all the valid sequence with memorisation dynamic programming */
        vector<int> dp(target+1, -1) ;// initailise dp with -1
        return solve(nums,target,dp) ;
    }
    // using helper funtion
    int solve(vector<int> nums,int target,vector<int>& dp){
        // base case
        if(target == 0)// if target become 0 then return 1
            return 1;// a way is possible
       
        if(target < 0) // if target is -ve then return 0 
            return 0;// no way is possible
        // find the target in dp
        if(dp[target] != -1)
            return dp[target] ;
        int count = 0 ;// count the no. of ways possible to find the target
        // traverse through nums and set new target
        for(int i = 0;i < nums.size();i++){
            count += solve(nums,target-nums[i],dp) ;// recursive statement.
        }
        
        dp[target] = count ;// update dp[target]
        return dp[target] ;
    }
};

From <https://leetcode.com/problems/combination-sum-iv/submissions/1044386147/?envType=daily-question&envId=2023-09-09> 
