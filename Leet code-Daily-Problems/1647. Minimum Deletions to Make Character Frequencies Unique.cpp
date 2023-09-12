From <https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/?envType=daily-question&envId=2023-09-12> 
  
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp ;
        for(int i = 0;i < s.size();i++){
            mp[s[i]]++ ;
        }
        vector<int> freq ; 
        for(auto i:mp){
            freq.push_back(i.second) ; 
        }
        
        sort(freq.begin(),freq.end()) ; 
        vector<int> comp = {freq[0]};
        int result = 0 ;
        for(int i = 1;i < freq.size();i++){
            int count = 1 ;
            if(freq[i] == comp[comp.size()-1]){
                int index = comp.size() - 1; 
                while(freq[i]-count != 0 && index > 0 && comp[index] == comp[index-1]+1){
                    count++ ; 
                    index-- ;
                }
                comp.insert(comp.begin()+index,freq[i]-count) ;
                result += count ; 
            }
            else{
                comp.push_back(freq[i]) ;
            }
        }
        return result ;
    }
};

From <https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/submissions/1047579045/?envType=daily-question&envId=2023-09-12> 
