From <https://leetcode.com/problems/sort-the-people/description/> 
  
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
