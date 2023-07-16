From <https://leetcode.com/problems/escape-the-ghosts/description/> 

class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        // you reach target at 
        int turn = abs(target[0]) + abs(target[1]) ; 
        int min_turn = INT_MAX ; 
        for(int i = 0;i < ghosts.size();i++){
            min_turn = min(min_turn,abs(ghosts[i][0] - target[0]) + abs(ghosts[i][1] - target[1])) ; 
        }
        if(min_turn > turn)
            return true;
        else 
            return false ;
    }
};

From <https://leetcode.com/problems/escape-the-ghosts/submissions/995806732/> 
