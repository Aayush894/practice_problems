From <https://leetcode.com/problems/extra-characters-in-a-string/description/?envType=daily-question&envId=2023-09-02>

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        // dp approach by memorisation
        vector<int> dp(s.size(),-1) ; 
        // store dictionary in unordered set for faster operation
        unordered_set<string> dic(dictionary.begin(),dictionary.end()) ; 
        int index = 0 ;
        
        return solve(s,dic,dp,index) ; 
    }
    // helper fuction using memorisation
    int solve(string s,unordered_set<string> dic, vector<int> & dp, int index){
        // base case if the index is in the end of the stirng 
        if(index == s.size())  return 0 ; 
        // dp memorisation if the fuction is already called 
        if(dp[index] != -1)  return dp[index] ; 
        // if not called previously then initialise dp[index] with one extra character 
        dp[index] = 1 + solve(s,dic,dp,index+1);
        // traversing word dic 
        for(auto &word:dic){
            // if word is found in the substring of s from index
            if(s.compare(index,word.size(),word) == 0) {
                // then dp[index] is set to min of dp[index] and word
                dp[index] = min(dp[index], solve(s,dic,dp,index+word.size())) ;
            }
        } 
        return dp[index];
    }
};

From <https://leetcode.com/problems/extra-characters-in-a-string/submissions/1038713955/?envType=daily-question&envId=2023-09-02> 
