From <https://leetcode.com/problems/ransom-note/submissions/955189520/> 

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int> mp ; // first for lowercase character and second for his count in magazine  
    
        for(int i = 0 ;i < magazine.size();i++)
        {
            mp[magazine[i] -97]++ ; // insert the character with its count 
        }
        for(int i = 0 ;i < ransomNote.size();i++) 
        {
            if(mp[ransomNote[i] - 97] > 0) // check if the char of ransomNote is present in map or not 
            mp[ransomNote[i] - 97]--; // if present then decrease the count by 1 ;
            else 
            return false ; // if not present then return false 
        }
        return true ; 
    }
};
