class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> st1 ;  // using set to check the occurance of same element in a row and column 
        set<char> st2 ; 
        set<char> st3 ;
        // check for similar element in a row and column using st1 and st2  
        for(int i = 0 ;i < 9;i++)
        {
            st1.erase(st1.begin(),st1.end()) ; 
            st2.erase(st2.begin(),st2.end()) ; 
            for(int j = 0 ;j < 9 ;j++) 
            {
                // check for similar element in a row 
                if(board[i][j] == '.')
                ;
                else if(st1.find(board[i][j]) == st1.end()) 
                st1.insert(board[i][j]) ; 
                else 
                return false ;
                // check for similar element in a column  
                if(board[j][i] =='.')
                continue ;
                else if(st2.find(board[j][i]) == st2.end()) 
                st2.insert(board[j][i]) ; 
                else 
                return false ;
            }
        }
        // check for similar item in 3 * 3 matrix  
        for(int i = 0 ;i < 9;i++)
        {
            if(i%3 == 0){
                st1.erase(st1.begin(),st1.end()) ; 
                st2.erase(st2.begin(),st2.end()) ; 
                st3.erase(st3.begin(),st3.end()) ; 
            }
            for(int j = 0 ;j < 9 ;j++) 
            {
                if(board[i][j] == '.')
                continue ;
                else if(j < 3) 
                {
                    if(st1.find(board[i][j]) == st1.end()) 
                    st1.insert(board[i][j]) ; 
                    else 
                    return false ;
                }
                else if(j < 6) 
                {
                    if(st2.find(board[i][j]) == st2.end()) 
                    st2.insert(board[i][j]) ; 
                    else 
                    return false ;
                }
                else
                {
                    if(st3.find(board[i][j]) == st3.end()) 
                    st3.insert(board[i][j]) ; 
                    else 
                    return false ;
                }
            }
        }
       
        return true ;
              
    }
};

From <https://leetcode.com/problems/valid-sudoku/submissions/954799166/?envType=study-plan-v2&id=top-interview-150> 
