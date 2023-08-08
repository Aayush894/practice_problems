class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp ;  
        vector<string> str ; // string vector to store all the words 
        string word = ""; 
        for(int i = 0 ;i < s.size();i++)
        {
            if(s[i] == ' ' ) //if whitespace then push the word 
            {
               str.push_back(word) ; 
               word="" ; 
            }
            else
            {
                word += s[i] ;  
            }
        } 
        str.push_back(word) ; //for last word
        
        if(pattern.size() != str.size()) // base case 
        return false ; 
        
        //do mapping of the char of pattern with the string vector str 
        for(int i = 0 ;i < pattern.size();i++)
        {
            if(mp.find(pattern[i]) == mp.end()) //if the char of pattern is not present 
            {
                for(auto it:mp) // then check if the map of the string str is already present or not 
                if(it.second == str[i]) 
                return false ; 
                mp[pattern[i]] = str[i] ; // else insert the char and string pair in map 
            }
            else 
            {
                if(mp[pattern[i]] != str[i])  //if present then check it is same as previous stirng
                return false ; // if not then return false 
            }
        }
        return true ; 
    }
};

From <https://leetcode.com/problems/word-pattern/submissions/955753219/>
