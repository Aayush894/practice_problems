From <https://leetcode.com/problems/remove-duplicate-letters/description/?envType=daily-question&envId=2023-09-26> 

class Solution {
public:
    string removeDuplicateLetters(string s) {
        // solve by stack approach using ans stirng as a stack ds 
        string ans = "" ; //result store in ans string 
        int last_occur[26] ; // map for storing the last occurance 
        int flag[26] ; // flag for taking record that the char is present on the ans or not 
        // initialise last_occur with -1 ;
        for(int i = 0;i < 26;i++){
            last_occur[i] = -1;
        }
       
        // initialise flag with 0 ;
        for(int i = 0;i < 26;i++){
            flag[i] = 0 ;
        } 

        //update the last occurance of all unique element in the string s in map
        for(int i = 0;i < s.size();i++){
            last_occur[s[i]-'a'] = i ;
        }
        
        // traverse the string s for finding the solution 
        for(int i = 0;i < s.size();i++){
            // if element already present in the ans then continue 
            if(flag[s[i]-'a'] == 1){
                continue ;
            }
            else{ // if element is not present in ans 
            // pop all element from the ans string which is lexicographically larger 
                while(ans.size() > 0 && ans.back() >= s[i])
                {
                //if is element last occurance is remaining then pop_back that element
                    if(i < last_occur[ans.back()-'a']){
                        flag[ans.back() - 'a'] = 0 ;//set flag to 0 say ele. is poped
                        ans.pop_back() ; 
                    }
                    else{ // else break from loop 
                        break ;
                    }
                }
                ans.push_back(s[i]) ;// push element into ans  
                flag[s[i]-'a'] = 1 ;//raise the element flag 
            }
        }
        return ans;
    }
};

From <https://leetcode.com/problems/remove-duplicate-letters/submissions/1006666563/?envType=daily-question&envId=2023-09-26> 
