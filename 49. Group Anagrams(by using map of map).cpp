class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ; 
        int n = strs.size() ; 
        map<map<char,int>,vector<string>> mp ; // using map of map 
        // by using hashmap approach for solving this problem in less time complexity than sorting
        for(int i = 0 ;i < n ;i++)
        {
            map<char,int> mymap; 
            for(int j = 0 ;j < strs[i].size();j++) // reduce time complexity form O(N*k*logk) to O(N*k) 
            {
                mymap[strs[i][j]]++ ; // storing char as the key and count as value
            }
            
            mp[mymap].push_back(strs[i]) ; // push the string which are anagram into the vector<string> 
        }
        // traverse map and storing the ans in vector<vector<string>> ans
        for(auto i:mp) 
        {
            ans.push_back(i.second) ; 
        }
        return ans ; 
    }
};

From <https://leetcode.com/problems/group-anagrams/submissions/955875696/?envType=study-plan-v2&id=top-interview-150
