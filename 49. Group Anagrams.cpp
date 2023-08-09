class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ; 
        int n = strs.size() ; 
        unordered_map<string,vector<string>> mp ; // using unordered map for reducing time complexity
        // by using sorting approach for solving this problem  
        for(int i = 0 ;i < n ;i++)
        {
            string temp = strs[i] ; 
            sort(strs[i].begin(),strs[i].end()) ; // sort the string 
            mp[strs[i]].push_back(temp) ; // push the string which are anagram into the vector<string> 
        }
        for(auto i:mp) 
        {
            ans.push_back(i.second) ; // traverse map and storing the ans in vector<vector<string>> ans 
        }
        return ans ; 
    }
};

From <https://leetcode.com/problems/group-anagrams/submissions/955868852/?envType=study-plan-v2&id=top-interview-150>
