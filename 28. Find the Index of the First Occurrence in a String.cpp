From <https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/940687930/> 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_len = haystack.size() ;  
        int nee_len = needle.size() ; 
        int flag = 0 ; 
        int i ,j ; 
        for(i = 0 ;i < hay_len;i++)
        {
            if(needle[0] == haystack[i]) // check the first needle index appearance 
            {
                flag = 1 ;
                int k = i ; 
                for(j = 1 ;j < nee_len ;j++)
                {
                    k++; 
                    if(haystack[k] != needle[j]) // check if needle found in haystack 
                    {
                        flag = 0 ; 
                        break ; 
                    }
                }
                if(flag) // if found break 
                break ; 
            }
        }
        if(flag) // return the ith index ie the first appearance index 
        return i ; 
        
        return -1 ; // base case if not found 
    }
};
