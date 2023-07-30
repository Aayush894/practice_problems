class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product_excluding_zero = 1 ; 
        pair <int ,int> zeroes ;  // using pair to store the index of zero 
        vector<int> ans = nums  ;
        for(int i = 0 ;i < ans.size();i++)
        {
            if(ans[i] == 0) 
            {
                zeroes.first++  ;
                zeroes.second = i ; 
                continue ; 
            }
            product_excluding_zero = product_excluding_zero * ans[i] ; 
            ans[i] = 0 ;  // initialize ans with zero 
        } 
        // if two zeroes than the result contains only zeroes 
        if(zeroes.first)  // base case 
        {
            if(zeroes.first == 1)  // if only 1 zero 
            ans[zeroes.second] = product_excluding_zero ;
            return ans ; 
        }
        // if not any zero in the input array  
        for(int i = 0 ;i < ans.size();i++)
        {
            ans[i] = product_excluding_zero / nums[i] ; 
        }
        
        return ans ; 
    }
};

From <https://leetcode.com/problems/product-of-array-except-self/submissions/951524456/?envType=study-plan-v2&id=top-interview-150>
