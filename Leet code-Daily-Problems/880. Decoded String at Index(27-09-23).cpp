From <https://leetcode.com/problems/decoded-string-at-index/description/?envType=daily-question&envId=2023-09-27> 

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;
        int n = s.size();

        // finding total length 
        for(auto it : s){
            if(isdigit(it)){
                len = len * (it - '0'); //If the character is a digit we multiply the current length
            }
            else{
                len++; // simply increase the length
            }
        }
        string result = "" ;
        // Reverse Traversal
        for(int i = n - 1 ; i >= 0 ; --i){
            k %= len; // Reduce k if it goes beyond length
            if((k == 0 || len == k) && (s[i] >= 'a' && s[i] <= 'z')){ 
			// if k itself becomes 0 or length of our string is equal to the character we need
			//we return the character
                result += s[i];
                break;
            }
            if(isdigit(s[i])){
			// if the character it a digit we reduce our length
                len /= (s[i] - '0');
            }
            else{ // else we simply decrease as this is not the character we need
                len--;
            }
        }
        return result;
    }
};

From <https://leetcode.com/problems/decoded-string-at-index/submissions/1060142349/?envType=daily-question&envId=2023-09-27> 
