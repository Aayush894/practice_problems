From <https://leetcode.com/problems/design-hashmap/description/> 

class MyHashMap {
public:
    int mp[1000001] ;
    // vector<pair<int,int>> mp ;
    
    MyHashMap() {
        memset(mp,-1,sizeof(mp)) ;
    }
    
    void put(int key, int value) {
        // for(int i= 0 ;i <mp.size();i++)
        // {
        //     if(mp[i].first == key)
        //     {
        //         mp[i].second = value ; 
        //         return ;
        //     }
        // }
        // mp.push_back({key,value}) ; 
        mp[key] = value ;
    }
    
    int get(int key) {
        // for(int i= 0 ;i < mp.size();i++)
        // {
        //     if(mp[i].first == key)
        //     {
        //        return mp[i].second ; 
        //     }
        // }
        if(mp[key] != -1)
        return mp[key] ; 

        return -1 ;
    }
    
    void remove(int key) {
        // for(int i= 0 ;i <mp.size();i++)
        // {
        //     if(mp[i].first == key)
        //     {
        //         mp.erase(mp.begin()+i) ; 
        //         break;
        //     }
        // }
        mp[key] = -1 ;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

From <https://leetcode.com/problems/design-hashmap/submissions/1066373982/> 
