From <https://leetcode.com/problems/min-stack/submissions/959948190/>

class MinStack {
public:
    vector<pair<int,int>> value ;//pair stores the value and the till min element 
    MinStack() {
       
        
    }
    
    void push(int val) {
        if(value.size() == 0)
            value.push_back({val,val}) ; 
        else 
            value.push_back({val,min(val,value[value.size()-1].second)}) ; 
    }
    void pop() {
       value.pop_back() ; 
    }
    
    int top() {
        return value[value.size() -1].first; 
    }
    
    int getMin() {
        return value[value.size() -1].second ;
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
