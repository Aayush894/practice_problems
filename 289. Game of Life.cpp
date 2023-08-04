class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size() ; 
        int cols = board[0].size() ; 
        vector<vector<int>> matrix = board ; 
        for(int i = 0 ;i < rows ;i++)
        {
            for(int j = 0 ;j < cols;j++)
            {
                int count = NoOfAliveNeighbours(matrix,i,j) ; 
                // conditions as per the statement given 
                if(count < 2)  
                board[i][j] = 0 ; 
                else if(count == 3) 
                board[i][j] = 1; 
                else if(count > 3)
                board[i][j] = 0 ;
            }
        }
    }
    int NoOfAliveNeighbours(vector<vector<int>> matrix,int row,int col)
    {
        int count = 0; 
        // initialize four pointers represents four parameters 
        int left = col -1 ; 
        int right = col + 1  ;
        int top = row -1 ; 
        int bottom = row + 1 ;
        // loop for valid values of these four pointers 
        while(left < 0)
        left++ ;
        while(right >= matrix[0].size())
        right--;
        while(top < 0)
        top++ ;
        while(bottom >= matrix.size())
        bottom-- ;
        // apply spiral concept for traversing through neighbours 
        for(int i = left ;i <= right;i++)
            if(top != row || i != col)
            count += matrix[top][i] ;
        top += 1 ; 
        for(int i = top ;i <= bottom;i++)
            if(i != row || right != col)
            count += matrix[i][right] ; 
        right -= 1 ; 
        if(top > bottom || left > right) // base case for one row and one col only 
        return count ; 
        for(int i = right ; i >= left ;i--)
            if(bottom != row || i != col)
            count += matrix[bottom][i] ; 
        bottom -= 1 ; 
        for(int i = bottom ; i >= top ;i--)
            if(i != row || left != col)
            count += matrix[i][left] ; 
        left += 1 ; 
        return count  ;
        
    }
};

From <https://leetcode.com/problems/game-of-life/submissions/954564793/?envType=study-plan-v2&id=top-interview-150> 
