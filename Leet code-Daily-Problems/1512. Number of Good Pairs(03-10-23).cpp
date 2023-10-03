From <https://leetcode.com/problems/number-of-good-pairs/description/?envType=daily-question&envId=2023-10-03> 

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0 ;
        // map to store frequency of each element
        unordered_map<int,int> freq ; 
        // Traverse nums vector
        for(auto num: nums){
            freq[num]++ ;
        }
        // Simple mathematics of summation n (n-1, n-2, ... , 1) 
        for(auto it: freq){
            ans += (((it.second-1) *(it.second))/2)  ; 
        }

        return ans ;
    }
};

From <https://leetcode.com/problems/number-of-good-pairs/submissions/1065458408/?envType=daily-question&envId=2023-10-03>
