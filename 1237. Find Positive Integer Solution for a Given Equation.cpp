From <https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/description/> 

/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
       // it  is a increasing function
        vector<vector<int>> ans ; // ans vector
        // find the pair between 1 to 1000
        for(int i = 1 ;i <= 1000;i++){
            // it is a increasing function if i , 1 > z then break 
            if(customfunction.f(i,1)> z)
            break ;
            // apply binary search to find the second term between 1 to 1000
            int begin = 1 , end = 1000 ; 
            while(begin <= end){
                int mid = (begin + end)/2 ;
                if(customfunction.f(i,mid) == z){
                    vector<int> temp ;
                    temp.push_back(i) ; 
                    temp.push_back(mid) ;
                    ans.push_back(temp) ; 
                    break ;
                }
                else if(customfunction.f(i,mid) > z){
                    end = mid-1 ;
                }
                else{
                    begin = mid+1 ;
                }
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/submissions/1004566998/> 
