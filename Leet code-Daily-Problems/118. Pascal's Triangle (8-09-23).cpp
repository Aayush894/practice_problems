From <https://leetcode.com/problems/pascals-triangle/description/?envType=daily-question&envId=2023-09-08> 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result ;// 'result' vector to store the result
        vector<int> prev = {1} ;// 'prev' to track record of the prev inserted vector
        result.push_back(prev) ;// initialise for first row
        // finding row other than first row
        for(int i = 2;i <= numRows;i++){
            // temporary vector of size i
            vector<int> temp(i) ; 
            // initialise boundaries with 1
            temp[0] = 1 ; 
            temp[i-1] = 1 ; 
            // calculte middle element 
            for(int j = 1;j < i-1;j++){
                // middle element can be find by the sum of the pos and prev. pos in the 'prev' vector.
                temp[j] = prev[j] + prev[j-1] ;
            }
            // push 'temp' vector into result
            result.push_back(temp) ;
            //new prev is temp
            prev = temp ; 
        }
        
        return result ;
    }
};

From <https://leetcode.com/problems/pascals-triangle/submissions/1043735371/?envType=daily-question&envId=2023-09-08> 
