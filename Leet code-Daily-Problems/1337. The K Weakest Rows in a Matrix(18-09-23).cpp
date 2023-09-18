From <https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/?envType=daily-question&envId=2023-09-18> 

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> Soldiers ; 
        for(int i = 0;i < mat.size();i++) 
        {
            int sum = 0 ; 
            for(int j = 0;j < mat[0].size();j++){
                sum += mat[i][j] ;
            }
            Soldiers.push_back(make_pair(sum,i)) ;
        }
        sort(Soldiers.begin(),Soldiers.end()) ; 
        vector<int> result(k) ;
        
        for(int i = 0;i < k ;i++){
            result[i] = Soldiers[i].second ;
        }
        return result ;
    }
};

From <https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/submissions/1052234743/?envType=daily-question&envId=2023-09-18> 
