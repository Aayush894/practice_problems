class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans ; //result vector
        sort(intervals.begin(),intervals.end()) ;// sort on the basis of the start index of the interval
        
        ans.push_back(intervals[0]) ; //insert first element in the ans 
        for(int i = 1 ;i < intervals.size();i++) 
        {
            if(ans.back()[1] < intervals[i][0]) //check if the end of the last vector<int> is less than the start of the next interval
            {
                ans.push_back(intervals[i]) ;
            }
            else //esle the end of the last interval is updated 
            {
                ans.back()[1] = max(ans.back()[1] ,intervals[i][1]) ; 
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/merge-intervals/submissions/956842873/?envType=study-plan-v2&id=top-interview-150>
