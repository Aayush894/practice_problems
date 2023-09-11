From <https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/?envType=daily-question&envId=2023-09-11> 

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result ; //  result vector
        // using map<groupsize,total id having same group size>
        map<int,vector<int>> mp; 
        // traverse the vector 'groupsizes'
        for(int i = 0;i < groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i) ;// insertion in map
        }
        // traverse map
        for(auto i:mp){
            // set count for group of size i.first ie. group size given
            int count = 0 ;
            // temporary vector
            vector<int> temp ;
            // traverse vector in map
            for(auto j:i.second)
            {
                temp.push_back(j) ;// push in temp
                count++ ;
                // it group limit reached
                if(count == i.first){
                    result.push_back(temp) ;// push into result vector
                    temp.clear() ; // clear temp vector
                    count = 0 ; // set limit to 0 
                }
            }
        }
        return result ;
    }
};

From <https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/submissions/1046423457/?envType=daily-question&envId=2023-09-11> 
