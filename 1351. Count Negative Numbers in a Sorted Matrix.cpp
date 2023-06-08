From <https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/> 

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size() ; 
        int cols = grid[0].size() ; 
        int count = 0 ; 
        for(int i = 0 ;i < rows ;i++)
        {
            for(int j = cols-1;j >= 0 && grid[i][j] < 0;j--)
            count++ ; 
        }
        return count ;
    }
};

From <https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/966230585/> 
