class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        //take four pinters indicates four parameters
        int left = 0 ; 
        int right = matrix[0].size() ; 
        int top = 0 ; 
        int bottom = matrix.size() ; 
        while(bottom > top && right > left)
        {
            //traversing through leftmost row from top
            for(int i = left;i < right;i++)
            {
                ans.push_back(matrix[top][i]) ; 
            }
            top = top + 1 ; //leftmost row traverse increase the top pointer 
            
            //traverse through rightmost column from top
            for(int i = top ;i < bottom;i++)
            {
                ans.push_back(matrix[i][right-1]) ; 
            }
            right = right -1 ; //rightmost col traverse decrease the right pointer
            // condition to check for single row matrix
            if(right <= left || bottom <= top) 
            break ;
            //traverse through bottom row from right 
            for(int i = right-1;i >= left;i--)
            {
                ans.push_back(matrix[bottom -1][i]) ; 
            }
            bottom = bottom -1 ; //bottommost row traverse decrease the bottom pointer
            
            //traverse through leftmost column 
            for(int i = bottom -1;i >= top;i--)
            {
                ans.push_back(matrix[i][left]) ; 
            }
            left = left + 1 ; //leftmost col traverse increase the left pointer
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/spiral-matrix/submissions/954528433/> 
