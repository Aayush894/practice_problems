From <https://leetcode.com/problems/reverse-words-in-a-string/submissions/950939052/?envType=study-plan-v2&id=top-interview-150>

class Solution {
public:
    string reverseWords(string s) {
        int k = 0 ; 
        string ans = s ; 
        for(int i = 0 ;i < s.length();i++)
        {
            if(s[i] == ' ' && (k == 0 || ans[k-1] == ' '))
            continue ; 
            else 
            {
                ans[k++] = s[i] ; 
            }
        }
        if(ans[k-1] == ' ')
        ans = ans.substr(0,k-1) ; 
        else
            ans = ans.substr(0,k) ; 
        reverse(ans.begin(),ans.end()); 
     
        k = 0 ; 
        for(int i = 0 ;i < ans.length();i++)
        {
            if(ans[i] == ' ')
            {
                reverse(ans.begin() + k,ans.begin() + i ) ;
                k = i + 1 ; 
            } 
        }
        reverse(ans.begin() + k,ans.end()) ;
        return ans ; 
    }
};
