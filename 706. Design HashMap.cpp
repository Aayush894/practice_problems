From <https://leetcode.com/problems/design-hashmap/description/> 
  
class MyHashMap {
public:
    vector<pair<int,int>> mp ;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(int i= 0 ;i <mp.size();i++)
        {
            if(mp[i].first == key)
            {
                mp[i].second = value ; 
                return ;
            }
        }
        mp.push_back({key,value}) ; 
    }
    
    int get(int key) {
        for(int i= 0 ;i < mp.size();i++)
        {
            if(mp[i].first == key)
            {
               return mp[i].second ; 
            }
        }
        return -1 ;
    }
    
    void remove(int key) {
        for(int i= 0 ;i <mp.size();i++)
        {
            if(mp[i].first == key)
            {
                mp.erase(mp.begin()+i) ; 
                break;
            }
        }
    }
};
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

From <https://leetcode.com/problems/design-hashmap/submissions/964232272/> 
