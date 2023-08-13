class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size() ; 
        int i = 0 ; 
        //insert the newInterval in his position in the interval 
        while(i < n && intervals[i][0] <= newInterval[0]) 
        i++ ; 
        intervals.insert(intervals.begin()+i,newInterval) ; 
        n++ ;//increase the length of intervals 
        //using merge concept for the output intervals 
        vector<vector<int>> ans = {intervals[0]} ; 
        for(int i = 1 ; i < n;i++)
        {
            if(ans.back()[1] < intervals[i][0])
            ans.push_back(intervals[i]) ; 
            else 
            ans.back()[1] = max(ans.back()[1],intervals[i][1]) ;
        }
        return ans; 
    }
};

From <https://leetcode.com/problems/insert-interval/submissions/956863028/?envType=study-plan-v2&id=top-interview-150>
