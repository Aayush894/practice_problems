From <https://leetcode.com/problems/integer-to-roman/submissions/943307371/> 

class Solution {
public:
    string intToRoman(int num) {
        string ans ;
        while(num != 0 )
        {
            if(num >= 1000)
            {
                string str = "M" ; 
                ans += str ; 
                num = num - 1000 ; 
            }
            else if(num >= 900)
            {
                string str = "CM" ; 
                ans += str ; 
                num = num - 900 ;
            }
            else if(num >= 500)
            {
                string str = "D"; 
                ans += str ; 
                num = num - 500 ; 
            }
            else if(num >= 400)
            {
                string str = "CD"; 
                ans += str ; 
                num = num - 400 ; 
            }
            else if(num >= 100)
            {
                string str = "C" ; 
                ans += str ;  
                num = num - 100 ; 
            }
            else if(num >= 90)
            {
                string str = "XC" ; 
                ans += str ;  
                num = num - 90 ; 
            }
            else if(num >= 50)
            {
                string str = "L"; 
                ans += str ; 
                num = num - 50 ; 
            }
            else if(num >= 40)
            {
                string str = "XL" ; 
                ans += str ;  
                num = num - 40 ; 
            }
            else if(num >= 10)
            {
                string str = "X" ; 
                ans += str ;  
                num = num - 10 ; 
            }
            else if(num >= 9)
            {
                string str = "IX" ; 
                ans += str ;  
                num = num - 9 ; 
            }
            else if(num >= 5)
            {
                string str = "V" ; 
                ans += str ; 
                num = num - 5 ;
            }
            else if(num >= 4)
            {
                string str = "IV" ; 
                ans += str ; 
                num = num - 4 ;
            }
            else 
            {
                string str = "I" ; 
                ans += str ; 
                num = num - 1;
            }
        }
        return ans ; 
    }
};
