class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size() ; 
        int m = b.size() ; 
        // reverse the strings 
        reverse(a.begin(),a.end()) ;
        reverse(b.begin(),b.end()) ; 
        // making the size of both the string equal by adding leading zeroes at the end of the reverse string 
        if(n > m)
        {
            for(int i = 0 ;i<n-m;i++) 
            b += '0' ; 
            m = n ; 
        }
        else 
        {
            for(int i = 0 ;i<m-n;i++) 
            a += '0' ; 
            n = m ; 
        }
        int carry = 0 ; 
        string ans = "" ; 
        int sum = 0 ;
        // apply bitwise addition(full adder)ie sum = A ^ B ^ C (^ -> % 2 sum) and carry = AB + BC + CA 
        for(int i = 0;i < n;i++) 
        {
            sum = ((a[i] - '0') + (b[i] - '0') + carry) % 2 ;
            carry = (((a[i] - '0') & (b[i] - '0')) | ((b[i] - '0') & carry)) | (carry & (a[i] - '0')) ; 
            ans += (sum + '0') ; 
        }
        if(carry) //if extra bit is required / the last addition produces a carry 
        ans += (carry + '0') ; 
        reverse(ans.begin(),ans.end()) ; 
        return ans ;
    }
};

From <https://leetcode.com/problems/add-binary/submissions/960883556/?envType=study-plan-v2&envId=top-interview-150> 
