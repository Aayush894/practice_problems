From <https://leetcode.com/problems/baseball-game/description/> 

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st ;
        for(int i = 0 ;i < operations.size();i++){
            if(operations[i]=="C"){
                st.pop() ; 
            }
            else if(operations[i]=="D"){
                int temp1 = stoi(st.top()) ;  
                st.push(to_string(temp1*2)) ; 
            }
            else if(operations[i]=="+"){
                int temp1 = stoi(st.top()); 
                st.pop() ; 
                int temp2 = stoi(st.top()) ; 
                st.push(to_string(temp1)) ; 
                st.push(to_string(temp1+temp2)) ; 
            }
            else{
                st.push(operations[i]);
            }  
        }
        int ans = 0 ;
        while(st.empty() == false){
            ans += stoi(st.top()) ; 
            st.pop() ; 
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/baseball-game/submissions/995796437/> 
