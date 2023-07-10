From <https://leetcode.com/problems/permutations-ii/description/> 

class Solution {
  private: 
/* apply backtracking with swapping concept */ 
    void solve(vector<int> nums,int index,vector<vector<int>> &ans){
        if(index >= nums.size() || find(ans.begin() ,ans.end(),nums) != ans.end())//base case for rejection
        return ;
        if(index == nums.size()-1 && find(ans.begin(),ans.end(),nums) == ans.end()) //base case for acceptance of num 
        {
            ans.push_back(nums) ; //add result in the ans
            return ; 
        }
        for(int i = index ;i < nums.size();i++) 
        {
            if(nums[index] == nums[i] && i != index) // (base case for reduce TC)
            continue ;
            swap(nums[index],nums[i]) ; // give the chance to every number for the first index
            solve(nums,index+1,ans) ; // increase the index 
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp ; // consider a mp ds for this solution
        vector<string> ans ; // ans vector
        int n = names.size() ; 
        for(int i = 0 ;i < n;i++) //iterate and store in map
        {
            mp[heights[i]] = names[i] ; 
        }
        for(auto i:mp) //iterate map 
        {
            ans.push_back(i.second) ; 
        }
        reverse(ans.begin(),ans.end()) ; // reverse map and return 
        return ans ; 
    }
};

From <https://leetcode.com/problems/sort-the-people/submissions/969952666/> 
