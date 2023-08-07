class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int,int> mp ; // using map for mapping the characters form s to t  ;
        int n = s.size() ; 
        for(int i = 0 ;i < n;i++) // loop for mapping 
        {
            if(mp.find(s[i] - 97) == mp.end()) //if element is not present in the map 
            {
                for(auto iterator:mp)  // loop for check if the character in t is already mapped or not 
                {
                    if(iterator.second == t[i] - 97) // if already mapped then return false 
                    return false ; 
                }
                mp.insert({s[i] - 97, t[i] - 97 });  // else insert in map 
            }
            else //if element is present in the map 
            {
                if(mp[s[i] - 97] != t[i] - 97)  //if character of t is not same to previously mapped
                return false ; //then return false 
            }
        }
    
        return true ;
    }
};

From <https://leetcode.com/problems/isomorphic-strings/submissions/955222497/> 
