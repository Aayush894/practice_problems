From <https://leetcode.com/problems/monotonic-array/description/?envType=daily-question&envId=2023-09-29> 

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool mon_dec = true ; 
        bool mon_inc = true ; 

        for(int i = 1;i < nums.size();i++){
            // if condition of monotone decreasing is violating
            if(mon_dec && nums[i] > nums[i-1] ){
                mon_dec = false ;
            }

            // if condition of monotone increasing is violating
            if(mon_inc && nums[i] < nums[i-1]){
                mon_inc = false ;
            }
        }
        // if atleast one of the condition is not violating then return true ;
        return (mon_inc || mon_dec)  ;
    }
};

From <https://leetcode.com/problems/monotonic-array/submissions/1061870141/?envType=daily-question&envId=2023-09-29>
