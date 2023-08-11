class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // simple approach by using set<int> hashmap ; 
        if(nums.size() == 0) // base case for length of nums is zero 
        return 0 ;
        set<int> st ;
        for(int i = 0 ;i < nums.size();i++)
        st.insert(nums[i]) ; // initialize set
        int count = 0 ;
        int maxFreq = 1 ;
        for(set<int>::iterator it = st.begin();it != st.end();it++) 
        {
            int n = *it; 
            if(st.find(n-1) == st.end()) //check for n-1 is not present in the set ,if present then we already done it ,for reducing TC
            {
                count = 0; 
                while(st.find(n) != st.end()) //lop for the next in the sequence is present on set or not 
                {
                    count++ ; 
                    n++ ; //incresing n for the next number
                }
                if(maxFreq < count)
                    maxFreq = count  ; 
            }
        }
        if(maxFreq < count)
             maxFreq = count  ; 
             
        return maxFreq ;
    }
};

From <https://leetcode.com/problems/longest-consecutive-sequence/submissions/955910647/>
