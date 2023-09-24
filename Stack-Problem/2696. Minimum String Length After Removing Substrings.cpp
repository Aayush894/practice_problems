From <https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/> 

class Solution {
public:
    int minLength(string s) {
        vector<char> val ;
        for(int i = 0 ;i < s.size();i++){
            if(val.size() && s[i] == 'B'){
                if(val[val.size()-1] == 'A')
                val.erase(val.begin()+val.size()-1) ; 
                else
                val.push_back('B') ;
            }
            else if(val.size() && s[i] == 'D'){
                if(val[val.size()-1] == 'C')
                val.erase(val.begin()+val.size()-1) ; 
                else
                val.push_back('D') ;
            }
            else 
            val.push_back(s[i]) ; 
        }
        return val.size() ; 
    }
};

From <https://leetcode.com/problems/minimum-string-length-after-removing-substrings/submissions/995453571/>
