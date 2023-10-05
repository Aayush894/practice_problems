From <https://leetcode.com/problems/majority-element-ii/description/> 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Boyer Moore Voting Algo 
        // According to algo the element whose count is not cancelled is the probable majority element.
        // Initialistion 
        int candidate1 = 0, candidate2 = 1, count1 = 0, count2 = 0;
        for (auto num : nums) {
            if (num == candidate1) {
                count1++;
            } 
            else if (num == candidate2) {
                count2++;
            } 
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } 
            else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } 
            else {
                count1--;
                count2--;
            }
        }
        vector<int> result ;
        int freq1 = 0,freq2 = 0 ; 
        // Count freq of candidate 1 and 2 
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == candidate1){
                freq1++ ;
            }
            if(nums[i] == candidate2){
                freq2++ ;
            }
        }
        if(freq1 > nums.size()/3)
            result.push_back(candidate1);
        if (freq2 > nums.size()/3) 
            result.push_back(candidate2);
        return result;          
    }
};

From <https://leetcode.com/problems/majority-element-ii/submissions/1067329220/> 
