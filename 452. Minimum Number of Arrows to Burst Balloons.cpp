From <https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/957140875/> 

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end()) ; //sort the points vector 
        int count = 0 ; 
        int i = 0 ,j; // use two pointer (erase function increase the complexity of the code)
        //TC(erase()) -> O(N)
        while(i < points.size()) //if no ballons then exit the loop 
        {
            vector<int> temp = points[i] ; 
            i++ ; //increment the start pointer 
            count++  ; // use a arrow 
            if(i >= points.size()) //if no ballons then break 
            break ; 
            j = i; // start with i (which is incresed by 1)
            while(j < points.size() && points[j][0] <= temp[1]) //erase all the balloons which can also be hit by the same arrow 
            {
                temp[0] = max(points[j][0],temp[0]) ; //update temp[0]
                temp[1] = min(points[j][1],temp[1]) ; //update temp[1]
                j++  ; //erase that balloon 
            }
            i = j ;//start = j 
        }
        return count ; 
    }
};
