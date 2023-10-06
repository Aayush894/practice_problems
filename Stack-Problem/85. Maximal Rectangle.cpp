From <https://leetcode.com/problems/maximal-rectangle/description/> 

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        // convert vector<vector<char>> into vector<vector<int>> 
        vector<vector<int>> val( n , vector<int> (m, 0)) ;
        for(int j = 0;j < m;j++){
            val[0][j] = matrix[0][j] - '0' ; 
        }
            
        // Step1:first row ke liye area nikal lo 
        int max_area = largestRectangleArea(val[0],m) ; 
        // Step2: row update by adding prev value ;
        
        for(int i = 1;i < n;i++){
            for(int j = 0;j < m;j++){
                if(matrix[i][j] != '0'){
                    val[i][j] = (matrix[i][j] - '0') + (val[i-1][j]) ;//update the height of histogram 
                }
                else{
                    val[i][j] = matrix[i][j] - '0' ;
                }
            }
            // after update find the max area 
            max_area = max(max_area,largestRectangleArea(val[i],m))  ;
        }
        
        return max_area ;  
    }
private:
    int largestRectangleArea(vector<int>& heights,int n) {
        // stack approach 
    
        // finding previous smaller height 
        vector<int> prev(n) ;
        prev = PrevSmallerIndex(heights,n) ;
    
        // finding next smaller height 
        vector<int> next(n) ;
        next = NextSmallerIndex(heights,n) ; 
    
        int max_area = 0 ; // ans value 
        int curr_area = 0 ; // for current area 
    
        // traverese heights 
        for(int i = 0;i < n;i++){
            int height = heights[i] ; //
            int width = (next[i] - prev[i] - 1) ; // width is given by  next smaller index - previous smaller index - 1 ;
    
            curr_area = height*width ; // length * breadth ;
            // check for max_area ;
            if(curr_area > max_area){
                max_area = curr_area ;
            }
        }
        return max_area ;
    }
    /* logic for finding arr of previos smaller element index */
    vector<int> PrevSmallerIndex(vector<int> arr,int n){
        // maintain a stack
        stack<int> st ;
        st.push(-1) ; // edge case when all prev element is greater or equal 
    
        vector<int> ans(n) ; // return vector 
        // traverse in forward dir
        for(int i = 0 ;i < n;i++){
            while(st.top()!= -1 && arr[st.top()] >= arr[i]) // check for smaller ascii value
            st.pop() ; 
            ans[i] = st.top(); // push index of smaller value into stack
            st.push(i) ; // push curr index in stack
        }
        return ans ;
    } 
    /* logic for finding arr of next smaller element index */
    vector<int> NextSmallerIndex(vector<int> arr,int n){
        stack<int> st ;
        st.push(n) ; // return n if all next element is greater or equal 
        
        vector<int> ans(n) ; // return vector 
        // traverse in backward dir
        for(int i = n-1;i >= 0;i--){
            while(st.top()!= n && arr[st.top()] >= arr[i])//check for smaller ascii value
            st.pop() ; 
    
            ans[i] = st.top() ; // push index of smaller value into stack
            st.push(i) ; // push curr index in stack
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/maximal-rectangle/submissions/1002642520/>
