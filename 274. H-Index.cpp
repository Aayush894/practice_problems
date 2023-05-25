From <https://leetcode.com/problems/h-index/submissions/952211128/> 

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end()) ; // sort in increasing order
        int i,ans = 0; 
        int n = citations.size() ; 
        for(i = 0; i < n ; i++) // traverse the sorted vector
        { 
            if(citations[i] <= (n - i)) // check if the no. of researcher have equal to more than paper published 
            ans = citations[i] ;
            else 
            {
                ans = max(ans,n-i) ; 
                break ; 
            }
        }
        return ans ;  // return the max value where we get the h-index 
    }
}; 
