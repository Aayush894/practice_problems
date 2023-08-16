From <https://leetcode.com/problems/n-th-tribonacci-number/description/> 

class Solution {
public:
    int tribonacci(int n) {
        // by using tabulation dynamic programming(Bottom - up approach)
        int arr[n+1]; 
        arr[0] = 0 ;  
        if(n == 0)
        return arr[0] ;
        arr[1] = 1 ;
        if(n == 1)
        return arr[1] ;
        arr[2] = 1 ;
        
        for(int i = 3;i <= n ;i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3]; 
        }
        return arr[n] ; 
    }
};

From <https://leetcode.com/problems/n-th-tribonacci-number/submissions/1023077949/> 
