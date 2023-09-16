(optimise by using counter instead of stack)

From <https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/> 

class Solution {
public:
    int minSwaps(string s) {
        // optimise code by  only only using count variabe instead of stack 
        // stack<char> st ;
        int count = 0 ;
        for(int i = 0 ;i < s.size() ;i++){
            if(s[i] == '['){
                count++ ; 
            }
            else if(count && s[i] == ']'){
                count-- ;  
            }
            else 
            continue ;
        }
        /* finding pattern if st.size = 1 -> 1 , 2 -> 1 ,3 -> 2 ,4 -> 2,5 ->3,6 -> 3,7 -> 4,8 -> 4 */
        int result = (count + 1)/ 2 ;
        return result ;
    }
};

From <https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/submissions/994244606/> 
