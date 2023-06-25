From <https://leetcode.com/problems/counting-bits/description/> 

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans ;
        for(int i = 0 ; i <= n ;i++)
        {
            int j = i ;
            int count = 0 ;
            while(j > 0)
            {
                if((j & 1) == 1)
                count++ ; 
                j >>= 1 ;
            }
            ans.push_back(count) ; 
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/counting-bits/submissions/978011241/> 
