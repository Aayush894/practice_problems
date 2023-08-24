class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        /*Bitset is a container in C++ Standard Template Library for dealing with data at the bit level. 
        -> we can convert bitset into string easily by to_string() 
        -> std::bitset::to_ullong This function Converts the contents of the bitset to an unsigned long long integer. The first bit of the bitset corresponds to the least significant digit of the number and the last bit corresponds to the most significant digit.*/ 
        bitset<32> bi(n) ; 
        string s = bi.to_string() ; 
        reverse(s.begin(),s.end()) ; 
        bitset<32> b2(s) ; 
        return b2.to_ulong() ;
    }
};

From <https://leetcode.com/problems/reverse-bits/submissions/961310495/?envType=study-plan-v2&envId=top-interview-150> 
