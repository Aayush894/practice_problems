From <https://leetcode.com/problems/build-an-array-with-stack-operations/description/> 

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> values ;
        vector<string> ans ; 
        int k = 0 ; 
        for(int i = 1;i <= n;i++)
        {
            if(k >= target.size())
                return ans ; 
            
            values.push(i) ;
            ans.push_back("Push") ;
            
            if(target[k] != values.top())
            {
                values.pop() ; 
                ans.push_back("Pop") ; 
            }
            else 
            k++ ;
        }
        return ans ; 
    }
};

From <https://leetcode.com/problems/build-an-array-with-stack-operations/submissions/992842945/> 
