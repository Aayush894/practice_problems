From <https://leetcode.com/problems/rotate-image/submissions/941196253/> 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        reverse(begin(matrix),end(matrix)) ;
        for(int i = 0 ;i < n;i++)
        {
            for(int j = i+1 ;j < n;j++)
            {
                swap(matrix[i][j],matrix[j][i]) ; 
            }
        }
    
    }
};
