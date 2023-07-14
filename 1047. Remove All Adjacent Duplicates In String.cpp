From <https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/> 

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "" ;
        // stack<char> st ;
        int i = 0 ;
        while(i < s.size()){
            if(ans.size() == 0){
                ans += s[i] ;
            }
            else if(ans[ans.size()-1] != s[i]){
                ans += s[i] ;
            }
            else{
               ans.erase(ans.end()-1); 
            }
            i++ ;
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/994465586/> 
