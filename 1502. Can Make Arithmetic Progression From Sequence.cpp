From <https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/> 

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ; //sort the given array 
        int n = arr.size() ;
        int cd = arr[1] - arr[0] ; // find common difference 
        /* loop for check if the differcence between the two consecutive element is equal to cd or not */
        for(int i = 0 ;i < n/2;i++) 
        {
            if(arr[i+1] - arr[i] != cd) // if difference not equal to cd then return false 
            return false ;
            if(arr[n-1-i] - arr[n-2-i] != cd)
            return false ;
        }
        return true ;
    }
};

From <https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/submissions/964821483/> 
