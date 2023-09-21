From <https://leetcode.com/problems/decode-string/description/> 

class Solution {
public:
    string decodeString(string s) {
       string ans = ""; // ans stirng 
       stack<char> st ; // char stack 
       // traverse the string s 
       for(int i = 0 ; i < s.size();i++){
           if(s[i] == ']'){ // if s[i] == ] then store the latest string in temp
               string temp = "" ; 
               // store latest stirng 
               while(st.top() != '['){
                   temp = st.top() + temp ;
                   st.pop() ; 
               }
               // pop [ bracket
               st.pop() ;
               string count = "" ; 
               // fetching the no of times repetition is done 
               while(!st.empty() && st.top() >= '0' && st.top() <= '9')
               {
                   count = st.top() + count; 
                   st.pop() ; 
               }
               temp = repeat(temp,stoi(count)) ; // temp store the string with repetition
               // push temp in st stack 
               for(int j = 0 ;j < temp.size();j++){
                   st.push(temp[j]) ;
               }
           }
           else{ // else push in stack 
               st.push(s[i]) ;
           }
       }
       // store the string form stack st to string ans 
       while(!st.empty()){
           ans = st.top() + ans ;
           st.pop() ;
       }
       return ans ;// return ans 
    }
private:
/* module to repeat the string n no of times */
   string repeat(string str , int n){
        string ans = "" ; 
        for(int i = 0 ;i < n;i++){
            ans += str ;
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/decode-string/submissions/994755729/> 
