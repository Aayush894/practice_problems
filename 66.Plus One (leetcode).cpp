From <https://leetcode.com/problems/plus-one/submissions/936962045/> 

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
        for(int i = digits.size() - 1;i >= 0;i--) // iterate loop from the end 
        {
            if(digits[i] == 9) // check the base case of 9
            digits[i] = 0 ; 
            else 
            {
                digits[i]++ ; // increment the other rest digits until we get other than 9
                return digits ; // return vector
            }
        }
        digits.insert(begin(digits),1) ; // base case if all the digits is 9
        return digits ; 
        
    }
};
