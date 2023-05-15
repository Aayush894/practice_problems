From <https://leetcode.com/problems/length-of-last-word/submissions/949578548/> 

class Solution {
public:
    int lengthOfLastWord(string s) {
       int count = 0 ; // counter for length of word 
       int n ; //length of string without last whitespaces 
       for(int i = 0 ;i < s.length() ;i++)
       {
           if(s[i] != ' ') 
           n = i ; 
       }
       for(int i = 0 ; i <= n;i++)
       {
           if(s[i] == ' ') 
           count = 0 ; 
           else 
           count++ ; 
           
       }  
       // count store the lenght of last_word 
       return count; 
    }
};

