From <https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/> 

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // apply stack 
        stack<int> ans ;// declare stack 
        vector<int> result ;// ans vector
        // for vector prices in reverse order 
        for(int i = prices.size()-1 ;i >= 0;i--){
            while(ans.empty() == false && ans.top() > prices[i]) // base condition 
            ans.pop() ; 
            if(ans.empty() == true) // if stack is initially empty or no element is smaller or equal to the current element 
            {
                result.push_back(prices[i]) ; 
                ans.push(prices[i]) ; 
                continue ;
            }
            //else case if smaller or equal element is founded in stack
            result.push_back(prices[i] - ans.top()) ;
            ans.push(prices[i]) ;  
        }
        reverse(result.begin(),result.end()) ; //the ans is stored in reverse order
        return result ;
    }
};

From <https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/992085041/> 
