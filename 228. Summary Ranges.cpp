class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<pair<int,int>> values ; //vector pair for storing the starting and end of the intervals 
        for(int i = 0 ;i< nums.size();i++)
        {
            int j = i ; 
            //check if it is not the last index 
            while((j < nums.size()-1)&&(nums[j+1] == nums[j] +1 ))//traverse till end of the sequence 
            j++ ; 
            
            values.push_back({nums[i],nums[j]})  ; //push start and end values 
            i = j ;
            
        }
        vector<string> interval;
        for(auto i = values.begin() ;i != values.end();i++) //traverse the vector of pair
        {
            if(i->first == i->second) // if start and end of interval is same 
            {
                string s = to_string(i->first) ; // then push only start
                interval.push_back(s) ; 
            }
            else 
            {
                string s = to_string(i->first) ; 
                string t = to_string(i->second) ; 
                interval.push_back(s+"->"+t) ; 
            }
        }
        
        return  interval ;
    }
};
