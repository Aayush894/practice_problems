From <https://leetcode.com/problems/exclusive-time-of-functions/description/> 

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n) ;  // a vector of length n index -> id , value -> time 
        int id ; // id -> current id 
        int time,prev_time = 0; // time -> current time , prev_time -> prev time 
        
        stack<int> st ; // tarck all the process which started ;
        // traversing logs 
        for(int i = 0 ;i < logs.size();i++){
            /* fetching the id */
            int id = stoi(logs[i]) ;
            /* fetching the time stamp*/
            int count = 0 ; // track of :'s
            int j = 0 ; // starting pointer
            int flag = 0 ; //check if starting or ending of the process
            /* if flag = 1 -> starting else ending ;*/
            while(count != 2){
                if(logs[i][j] == ':')
                count++ ; 
                if(logs[i][j] == 's')
                flag = 1 ;
                j++ ;
            }
            // j points toward the starting of the timestamp  
            // logs[i].substr(j,logs[i].size() - j) gives the value of timestamp in string type 
            int time = stoi(logs[i].substr(j,logs[i].size() - j)) ; // getting timestamp  
            /* initial condition shows starting of the process */
            if(i == 0)
            {
                st.push(id) ; 
                prev_time = time ;
                continue ;
            }
            /* if it is not the starting of the first process first process */
            int time_gap = time - prev_time ; // time gap from prev timestamp 
            
            if(flag){  // starting of another process 
                if(!st.empty()) // idleness condition of the cpu when no process in st
                ans[st.top()] += time_gap ; 
                prev_time = time ; //starting og the next process is form the starting of the curr_time ;
                st.push(id) ; 
            }
            else{ // ending of the started process 
               ans[st.top()] += time_gap + 1 ; // is ending occur then at the end of the process ;
                prev_time = time + 1 ; //starting time of next process is form the next val of curr_time
                st.pop() ; 
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/exclusive-time-of-functions/submissions/996500378/> 
