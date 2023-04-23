From <https://leetcode.com/problems/count-primes/submissions/937522342/> 

class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n == 1)
        return 0 ; 
        int prime[n + 1] ; 
        for(int i = 2 ;i < n;i++)
        prime[i] = 0 ; 

        for(long i = 2;i < n;i++) 
        {
            if(prime[i] == 0)
            {
                for(long j = i*i ;j < n;j += i)
                {
                    prime[j] = 1 ; 
                }
            }
        }
        int count = 0 ; 
        for(int i = 2 ;i < n;i++ )
            if(prime[i] == 0)
            count++ ; 
        return count ; 
    }
};

