class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0 ;
        int i = 0 ,j = height.size()-1 ; 
        while(i < j)
        {
            int area = (min(height[i],height[j]) * (j-i)) ; 
                if(area > max_area)
                max_area = area ; 
            if(height[i] >= height[j]) 
            j-- ; 
            else 
            i++  ; 
        }
        return max_area ;
    }
};

From <https://leetcode.com/problems/container-with-most-water/submissions/953373345/> 
