class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size() ; 
        int cols = matrix[0].size() ; 
        multimap<int,int> pos ;  // multimap for storing the position of all initial zeroes 
        // traverse matrix for pos of  zeroes
        for(int i = 0 ;i < matrix.size();i++)
        {
            for(int j = 0 ;j < matrix[0].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    pos.insert(make_pair(i,j)); 
                }
            }
        }
        int j ;
        for(auto i = pos.begin();i != pos.end();++i)
        {
            int index1 = i->first ; 
            int index2 = i->second ; 
            for(j = 0 ;j < rows;j++) // for column element -> zeroes
            { 
                matrix[j][index2] = 0;
            }
            for(j = 0 ;j < cols;j++)// for row element -> zeroes
            {
                matrix[index1][j] = 0 ; 
            }
        } 
    }
};

From <https://leetcode.com/problems/set-matrix-zeroes/submissions/954304273/?envType=study-plan-v2&id=top-interview-150> 
