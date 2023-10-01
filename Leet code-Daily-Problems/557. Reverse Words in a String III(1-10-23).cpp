From <https://leetcode.com/problems/reverse-words-in-a-string-iii/description/?envType=daily-question&envId=2023-10-01> 

class Solution {
public:
    string reverseWords(string s) {
        // append white space in string s ;
        s += " " ; 
        // vector<int> to store index of WhiteSpaces occur in the string `s`.
        vector<int> ws ; 
        // Traverse `s`.
        for(int i = 0;i < s.size();i++){
            if(s[i] == ' ')
                ws.push_back(i) ;
        }
        // Store reverse of Firstword in the `ans` string.
        string ans = ReverseString(s,0,ws[0]-1) ; 

        int start = ws[0] + 1 ;// Strating of next Word.

        // Travere vector `ws`
        for(int i = 1;i < ws.size();i++){ 
            // add reverse of next word with WhiteSpace in the `ans` string.
            ans += ReverseString(s,start,ws[i]) ; 
            start = ws[i]+1 ;// Upadate Starting Index
        }

        return ans ;// return `ans` string.
    }
private: 
    // Utility Function to return reverse between indexes.
    string ReverseString(string& s, int start, int end){
        string rev = "" ;
        
        for(int i = end;i >= start;i--){
            rev += s[i] ; 
        }

        return rev ; 
    }
};

From <https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/1063695038/?envType=daily-question&envId=2023-10-01> 
