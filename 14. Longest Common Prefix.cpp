From <https://leetcode.com/problems/longest-common-prefix/submissions/937731221/> 

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0,counter = 0; 
        for(int i = 0 ;i < strs[0].length();i++) 
        {
            for(int j = 1 ;j < strs.size();j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    counter++ ; 
                    break ;
                }
            }
            if(counter)
            break ; 
            count++ ; 
        }
        if(count == 0)
        return "" ; 
        
        return strs[0].substr(0,count) ;
    }
};

