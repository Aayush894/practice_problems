From <https://leetcode.com/problems/132-pattern/description/?envType=daily-question&envId=2023-09-30> 

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        /* Approach 1: O(N^2) Brute force
        for(int i = 0;i < nums.size();i++){
            stack<int> st ;
            for(int j = i+1;j < nums.size();j++){
                if(nums[j] > nums[i]){
                    if(st.empty()){
                        st.push(nums[j]) ; 
                    }
                    else if(st.top() <= nums[j]){
                        st.push(nums[j]) ;
                    }
                    else{
                        return true ;
                    }
                }
            }
        }
        return false ; */

        int n = nums.size();
        // Initialise with min_val 
        int num3 = INT_MIN;
        // Using stack
        stack<int> st;
        // Using Reverse Traversal
        for(int i = n- 1; i >= 0; i--){
            // if element is found less than num3 then return true ;
            if(nums[i] < num3){
                // (nums[i] < nums[k])
                return true;
            }else{
                // if nums[i] > st.top() then only loop is executed.
                while( !st.empty() &&  st.top() < nums[i] ){
                    // (nums[k] < nums[j]) 
                    num3 = st.top(); // num3 = nums[k]
                    st.pop();
                }
            }
            // push nums[i] into stack.
            st.push(nums[i]);
        }

        return false;
    }
};

From <https://leetcode.com/problems/132-pattern/submissions/1062988380/?envType=daily-question&envId=2023-09-30>
