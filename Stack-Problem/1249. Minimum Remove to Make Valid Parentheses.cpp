From <https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/> 

class Solution {
public:
    string minRemoveToMakeValid(string s) { 
        // only used string to optimise the code ; using stack concept in string 
        int count = 0 ; // counter that count the unvaild paranthesis count 
        string ans = ""; // ans string 
        // traverse the string s ;
        for(int i = 0 ; i < s.size();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans += s[i] ;
            }
            else if(s[i] == '('){
                ans += s[i] ;
                count++ ; 
            }
            else if(s[i] == ')' && count){
                ans += s[i] ;
                count-- ;
            }
            else{
                continue ;
            }
        }
        // if count > 0 then string having more '(' paranthesis ;
        for(int i = ans.size()-1 ; i >= 0 && count ;i--){
            if(ans[i] == '('){
                ans.erase(ans.begin()+i,ans.begin()+i+1) ;
                count-- ; 
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/submissions/994454293/> 
