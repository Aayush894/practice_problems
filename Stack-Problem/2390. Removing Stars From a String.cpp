From <https://leetcode.com/problems/removing-stars-from-a-string/description/> 

class Solution {
public:
    string removeStars(string s) {
        string ans = "" ; 
        for(int i=0;i<s.size();i++) 
        {
            if(s[i] == '*')
            {
                if(ans.size()){
                    ans.erase(ans.size()-1) ; 
                }
            }
            else 
            {
                ans += s[i] ; 
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/removing-stars-from-a-string/submissions/992649588/> 
