class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans ;
        map<int,int> mp ; 
        for(int i = 0 ;i < items1.size();i++) 
        {
            if(mp.find(items1[i][0]) == mp.end())
            mp[items1[i][0]] = items1[i][1] ; 
            else 
            mp[items1[i][0]] = mp[items1[i][0]] + items1[i][1] ; 
        }
        for(int i = 0 ;i < items2.size();i++) 
        {
            if(mp.find(items2[i][0]) == mp.end())
            mp[items2[i][0]] = items2[i][1] ; 
            else 
            mp[items2[i][0]] = mp[items2[i][0]] + items2[i][1] ; 
        }
        
        for(auto i = mp.begin(); i != mp.end();i++)
        {
            vector<int> temp ;
            temp.push_back(i->first) ; 
            temp.push_back(i->second) ; 

            ans.push_back(temp) ; 
        }
        return ans ;

    }
};

From <https://leetcode.com/problems/merge-similar-items/submissions/978004851/> 
