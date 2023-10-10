From <https://leetcode.com/problems/peak-index-in-a-mountain-array/description/> 

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // Apply binary search 
        // loop until peak not found ;
        int n = arr.size() ; 
        int begin = 1 ;
        int end = n-1 ;
        // mountian peek is between 1 and arr.size()-1 index ;
        while(begin <= end){
            int mid = (begin + end)/2 ; // finding mid 
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                // it is the condition of peek 
                return mid ; 
            }
            else if(arr[mid-1] > arr[mid] && arr[mid] > arr[mid+1]){
                // peak is in the left side of the mid 
                end = mid-1 ;
            }
            else{
                // peak is in the right side of the mid 
                begin = mid + 1 ;
            }
        }
        return -1 ; // if no peak 
    }
};

From <https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1003381879/>
