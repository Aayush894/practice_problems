From <https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/description/?envType=daily-question&envId=2023-09-10> 

class Solution {
public:
    int countOrders(int n) {
        vector<long> dp(n+1) ;
        dp[1] =  1 ; 
        // using mathematics with dp memorisation.
        for(int i = 2;i <= n;i++){
            // finding multiplication factor 
            int factor = (i*(i + (i-1))) ; 
            dp[i] = (dp[i-1]*factor) % 1000000007 ; 
        }
        return dp[n] ;
    }
};

From <https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/submissions/1045466110/?envType=daily-question&envId=2023-09-10> 
