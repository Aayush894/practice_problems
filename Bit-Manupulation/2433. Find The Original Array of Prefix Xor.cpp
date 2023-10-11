From <https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/> 

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        /* apply concept ie . pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i] 
                           => pref[i] = pref[i-1] ^ arr[i] 
                           becoz prefix[i-1] = arr[0] ^ arr[1] ^ ... ^ arr[i-1]
                           : xor both side .
                           => pref[i] ^ pref[i-1] = pref[i-1] ^ arr[i] ^ pref[i-1] 
                           => pref[i] ^ pref[i-1] = 0 ^ arr[i]
                           becoz a ^ a = 0 
                           => pref[i] ^ pref[i-1] = arr[i] 
                           becoz 0 ^ a = a                 */
        int n = pref.size() ;
        vector<int> arr(n) ; 
        arr[0] = pref[0] ;
        for(int i = 1 ;i < n;i++ ){
            arr[i] = pref[i]^ pref[i-1] ; 
        }
                           
        return arr ;
    }
};

From <https://leetcode.com/problems/find-the-original-array-of-prefix-xor/submissions/1003770483/> 
