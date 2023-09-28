From <https://leetcode.com/problems/sort-array-by-parity/description/?envType=daily-question&envId=2023-09-28> 

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int index = 0 ;
        
        // Using Partition concept as in Quick Sort on the basis of even number.
        for(int i = 0 ;i < nums.size();i++){
            if(nums[i]%2 == 0){
                // if even no. comes then shift it at the beginning.
                swap(nums[index],nums[i]) ; 
                // Increase index.
                index++ ;
            }
        }
        return nums ; // return vector
    }
};

From <https://leetcode.com/problems/sort-array-by-parity/submissions/1061001912/?envType=daily-question&envId=2023-09-28>
