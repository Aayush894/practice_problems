From <https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/> 

class Solution {
public:
    int minSwaps(string s) {
        stack<char> st ;
        for(int i = 0 ;i < s.size() ;i++){
            if(s[i] == '['){
                st.push('[') ; 
            }
            else if(!st.empty() && s[i] == ']'){
                st.pop() ; 
            }
            else 
            continue ;
        }
        /* finding pattern if st.size = 1 -> 1 , 2 -> 1 ,3 -> 2 ,4 -> 2,5 ->3,6 -> 3,7 -> 4,8 -> 4 */
        int result = (st.size() + 1)/ 2 ;
        return result ;
    }
};

From <https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/submissions/994242825/> 
