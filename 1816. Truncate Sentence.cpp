From <https://leetcode.com/problems/truncate-sentence/description/> 

class Solution {
public:
    string truncateSentence(string s, int k) {
        int count_ws = 0 ;
        int i ;
        for(i = 0 ;i < s.size();i++)
        {
            if(s[i] == ' ')
            count_ws++  ;
            if(count_ws == k) 
            break ;
        }
        return s.substr(0,i) ;
    }
};

From <https://leetcode.com/problems/truncate-sentence/submissions/963816187/>
