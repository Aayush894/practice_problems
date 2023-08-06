class Solution {
public:
    bool isHappy(int n) {
        map<int,int> mp ; //map of number n and its sum of square of digits; 
        while(1)
        {
            if(mp.find(n) == mp.end()) // if no. is not present in the map 
            {
                int temp = n ;
                int sum_of_square = 0; 
                while(temp!= 0) // loop for sum of squares of digits 
                {
                    sum_of_square += pow(temp%10,2) ; 
                    temp = temp/10 ;
                }
                if(sum_of_square == 1) //exit case 
                return true ;
                mp[n] = sum_of_square ; //initialise in the map 
                n = sum_of_square ; //update n
            }
            else 
            return false ; // if already present then return false 
        }
    }
};

From <https://leetcode.com/problems/happy-number/submissions/956402724/?envType=study-plan-v2&id=top-interview-150> 
