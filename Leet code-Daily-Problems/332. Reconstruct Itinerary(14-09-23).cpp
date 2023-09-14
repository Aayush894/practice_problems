From <https://leetcode.com/problems/reconstruct-itinerary/description/?envType=daily-question&envId=2023-09-14> 
  
class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,vector<string>> mp ; 
        for(auto i:tickets){
            mp[i[0]].push_back(i[1]) ;
        }
        // Sort destinations in reverse order to visit lexical smaller destinations first
        for (auto &entry : mp) {
            sort(entry.second.begin(), entry.second.end(),greater<string>());
        }
        
        vector<string> result ;
        dfs(mp,result,"JFK") ;
        reverse(result.begin(),result.end()) ;
        return result ;
    }
    void dfs(unordered_map<string,vector<string>>& mp, vector<string>& result,string temp){
        vector<string> &des = mp[temp] ;
        while (!des.empty()) {
            string nextDes = des.back();
            des.pop_back();
            dfs(mp,result,nextDes);
        }
        
        // Add the current airport to the itinerary after visiting all destinations
        result.push_back(temp);
    }
};

From <https://leetcode.com/problems/reconstruct-itinerary/submissions/1049063950/?envType=daily-question&envId=2023-09-14> 
