From <https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/> 

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // apply brute force 
        for(int i = 0 ;i < prices.size();i++){
            int j = i + 1 ; 
            while(j < prices.size() && prices[j] > prices[i])
            j++  ;
            if(j != prices.size())
            prices[i] = prices[i] - prices[j] ; 
        }
        return prices ;
    }
};

From <https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/992070467/> 
