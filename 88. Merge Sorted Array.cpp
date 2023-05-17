From <https://leetcode.com/problems/merge-sorted-array/submissions/950260043/?envType=study-plan-v2&id=top-interview-150> 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j = n-1  ;  // last index of both the vector nums1 and nums2 
        for(int k = m+n-1;j >= 0 ;k--)
        {
            if(i >= 0 && nums2[j] < nums1[i]) //check if nums1 is greater than nums2
            {
                nums1[k] = nums1[i] ; //then kth index is nums1 current index 
                i-- ; //decrement the current position 
            }
            else 
            {
                nums1[k] = nums2[j] ; // else kth index is nums2 current index 
                j-- ; //decrement the current position 
            }
        }
    }
};
