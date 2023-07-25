class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ; 
        int start = 0 ,end = 0 ; 
        int max_substr = 0; 
        set<int> substr ; // use set
        while(end < n)
        {
            if(substr.find(s[end]) == substr.end()) //use find -> If the specified element is found, an iterator to the element is returned; otherwise, an iterator to the end of the container is returned
            {
                substr.insert(s[end]) ; // insert the end 
                max_substr = max(max_substr,end - start + 1) ; 
                end++ ;  // if present then slide the end forward 
            }
            else 
            {
                substr.erase(s[start]) ; 
                start++ ; // else slide the start forward 
            }
        }
        return max_substr ; 
    }
};

From <https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/954228866/> 
