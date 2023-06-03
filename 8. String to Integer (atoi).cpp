From <https://leetcode.com/problems/string-to-integer-atoi/submissions/957875237/> 

class Solution {
public:
    int myAtoi(string s) {
        double num =  0 ; 
        int sign = 1;
        string new_s = "" ;//modify the input string  
        //new_s contains only the numbers 
        int i = 0 ;
        while(s[i] == ' ') 
        i++ ;
        if(s[i] == '-')
        {
            sign = -1 ;
            i++ ;
        } 
        else if(s[i] == '+')
        {
            sign = 1 ;
            i++ ; 
        } 
        while(i < s.size())
        {
            if(s[i] >= '0' && s[i] <= '9')
            num = (num * 10)+ (s[i] - 48) ; 
            else 
            break ;
            i++ ; 
        }
        num = num*sign ; //number 
        if (num > INT_MAX) //edge case
        {
            return INT_MAX ; 
        }
        else if( num < INT_MIN)
        {
            return INT_MIN ; 
        }
        else 
        return int(num) ;
    }
};
