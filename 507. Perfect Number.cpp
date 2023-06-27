From <https://leetcode.com/problems/perfect-number/description/> 

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 1 ;
        if(num == 1)
        return false ; 
        for(int i = 2; i <= num/2 ;i++){
            if(num%i == 0){
                sum = sum+i ;
            }
        }
        if(sum == num)
        return true ;
        else 
        return false ;
    }
};

From <https://leetcode.com/problems/perfect-number/submissions/980789199/>
