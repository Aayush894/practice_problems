From <https://leetcode.com/problems/remove-k-digits/description/> 

class Solution {
public:
    string removeKdigits(string num, int k) {
        // using only result in place of stack (result as stack)
        string result ;//result string
        int i = 0 ;
        while(i < num.size() && k > 0 )
        {
            if(result.size() == 0) // if stack is empty then push 
            {
                result += num[i] ;
                i++ ;  
            }
            else if(result[result.size()-1] > num[i]) // if top of stack is greater than the num[i]
            {
                result.erase(result.size()-1) ;
                k-- ;
            }
            else // else push element in stack 
            {
                result += num[i] ; 
                i++ ;
            }
        }
        while(i < num.size()) // add rest element of num string into result
        {
            result += num[i] ; 
            i++ ; 
        }
        
        if(k > 0) // if deletion is remaining 
        {
            result = result.substr(0,result.size()-k) ; //delete last elements 
        }
        
        int j = 0;
        while(result[j] == '0') // remove leading zeroes 
        {
            result.erase(j,j+1);
        }
        
        if(result.size() == 0) // if result is empty then result = 0 
        {
            result += '0' ;
        }
        
        return result;
    }
};

From <https://leetcode.com/problems/remove-k-digits/submissions/990972439/> 
