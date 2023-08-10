class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> Mp1 ; // using two map for both the string 
        map<char,int> Mp2 ; 
        if(s.size() != t.size()) // base case 
        return false ; 
        
        int n = s.size() ; 
        for(int i = 0 ;i < n;i++) // traverse and insert the pair<char,count> in the map  
        {
            Mp1[s[i]]++ ;
            Mp2[t[i]]++ ; 
        }
        if(Mp1 != Mp2) // if map are not equal then return false 
        return false ;
       
        return true ; // else return true 
    }
};

From <https://leetcode.com/problems/valid-anagram/submissions/955881909/?envType=study-plan-v2&id=top-interview-150> 
