From <https://leetcode.com/problems/is-subsequence/description/?envType=daily-question&envId=2023-09-22> 

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int startOfs = 0 ; 
        int startOft = 0 ; 
        while(startOfs < s.size() && startOft < t.size())
        {
            if(s[startOfs] == t[startOft])
            {
                startOfs++ ; 
                startOft++ ; 
            }
            else
            startOft++ ; 
        } 
        if(startOfs == s.size())
        return true ; 
        else 
        return false ;
    }
};

From <https://leetcode.com/problems/is-subsequence/submissions/1055864908/?envType=daily-question&envId=2023-09-22> 
