From <https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/?envType=daily-question&envId=2023-10-02> 

class Solution {
public:
    bool winnerOfGame(string colors) {
        int CountAlterA = 0 ;
        int CountAlterB = 0 ;

        for(int i = 1; i < colors.size()-1;i++){
            if(colors[i-1] == colors[i] && colors[i] == colors[i+1]){
                if(colors[i] == 'A'){
                    CountAlterA++ ;
                }
                else{
                    CountAlterB++ ;
                }
            }
        }

        if(CountAlterA > CountAlterB){
            return true ;
        }
        
        return false ;
    }
};

From <https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/submissions/1064496343/?envType=daily-question&envId=2023-10-02> 
