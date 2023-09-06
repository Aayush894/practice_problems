From <https://leetcode.com/problems/counting-bits/description/?envType=daily-question&envId=2023-09-01>

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

From <https://leetcode.com/problems/counting-bits/submissions/1037337791/?envType=daily-question&envId=2023-09-01> 
