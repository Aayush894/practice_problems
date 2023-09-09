(optimise code by using vector in place of stack)
From <https://leetcode.com/problems/design-a-stack-with-increment-operation/description/> 

class CustomStack {
public:
// optimise it by using vector<int> in place of stack
    vector<int> custom ; 
    vector<int> inc ;
    int max_size ; 
    CustomStack(int maxSize) {
        this->max_size = maxSize ;
    }
    
    void push(int x) {
        // push karne ke baad bhi no of element badhega to check for max_size - 1 ;
        if(custom.size() < max_size)
        custom.push_back(x) ; 
    }
    
    int pop() {
        if(!custom.empty())
        {
            int x = custom[custom.size()-1]; 
            custom.pop_back() ; 
            return x ;
        }
        return -1 ;
    }
    
    void increment(int k, int val) {
        for(int i = 0 ;i < k && i < custom.size();i++){
           custom[i] = custom[i] + val ;
       } 
    }
};
/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */

From <https://leetcode.com/problems/design-a-stack-with-increment-operation/submissions/992314453/> 
