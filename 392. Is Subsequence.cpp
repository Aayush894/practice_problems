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

From <https://leetcode.com/problems/is-subsequence/submissions/953068369/?envType=study-plan-v2&id=top-interview-150> 
