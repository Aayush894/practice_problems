From <https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/> 

class Solution {
public:
    string generateTheString(int n) {
       string ans = "" ; 
       if(n == 1) //base case if n is odd but 1  
       return "a" ; 
       
       // play with only three characters a,b,c ;
       if(n%2 == 0) //if n is even 
       {
           //insert "a" n-1 times ie odd and add "b" next ;
           for(int i = 0 ; i<n-1;i++)
           ans += "a" ;
           ans+= "b" ;
       } 
       else //if n is odd except 1 
       {
           //insert "a" n-2 times ie odd and add "b" and "c" next ; 
            for(int i = 0 ; i<n-2 ;i++) 
            ans += "a" ;
            ans += "bc" ;
       }
       return ans ;
    }
};

From <https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/964210900/> 
