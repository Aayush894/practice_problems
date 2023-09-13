From <https://leetcode.com/problems/candy/description/?envType=daily-question&envId=2023-09-13> 
  
class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size() ;
        // Initialise Two vector with 1
        vector<int> Left(n,1) ; //for Left Prefix Sum
        vector<int> Right(n,1) ; //for Right Prefix Sum
        // finding Left Prefix Sum
        for(int i = 1;i < n ;i++){
            if(ratings[i] > ratings[i-1]){
                Left[i] += Left[i-1]  ; 
            }
        }
        // finding Right Prefix Sum
        for(int i = n-2;i >= 0 ;i--){
            if(ratings[i] > ratings[i+1]){
                Right[i] += Right[i+1]  ; 
            }
        }
        int result = 0 ; 
        // finding result 
        for(int i = 0;i < n;i++){
            result += max(Left[i],Right[i]) ; // Add Max of Left and Right
        }
        return result ;// return result 
    }
};

From <https://leetcode.com/problems/candy/submissions/1048345348/?envType=daily-question&envId=2023-09-13> 
