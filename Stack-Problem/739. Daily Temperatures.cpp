From <https://leetcode.com/problems/daily-temperatures/description/> 

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        // using stack 
        vector<int> st1 ; // temporary vector
        vector<int> ans ; // ans vector
        // traverse temp vector in reverse dir
        for(int i = temp.size()-1;i >= 0;i--){
            // push index in stack 
            if(i == temp.size()-1){
                ans.push_back(0) ; 
                st1.push_back(i) ; 
            }
            else{ // is the day is not the last day 
            // pop stack s1 until we get the warth day or no warth day found 
                while(!st1.empty() && temp[st1[st1.size()-1]] <= temp[i]){
                    // tem.push_back(st1.top()) ; 
                    st1.pop_back() ; 
                }
                if(st1.size() == 0){
                    // no warm day
                    ans.push_back(0) ; 
                }
                else{
                    // warm day found 
                    ans.push_back(st1[st1.size()-1]-i) ; //difference of days 
                }
                st1.push_back(i) ; 
            }
        }
        // ans is stored in reverse order to nutrilise it reverse vector<int> ans 
        reverse(ans.begin(),ans.end()) ;
        return ans ; 
    }
};

From <https://leetcode.com/problems/daily-temperatures/submissions/994995622/> 
