From <https://leetcode.com/problems/design-a-stack-with-increment-operation/description/> 

class CustomStack {
public:
    stack<int> custom ; 
    stack<int> inc ;
    int max_size ; 
    CustomStack(int maxSize) {
        this->max_size = maxSize ;
    }
    
    void push(int x) {
        // push karne ke baad bhi no of element badhega to check for max_size - 1 ;
        if(custom.size() < max_size)
        custom.push(x) ; 
    }
    
    int pop() {
        if(!custom.empty())
        {
            int x = custom.top() ; 
            custom.pop() ; 
            return x ;
        }
        return -1 ;
    }
    
    void increment(int k, int val) {
       while(!custom.empty()){
           int temp = custom.top() ;
           inc.push(temp) ; 
           custom.pop() ;
       } 
       while(k-- && !inc.empty()){
           int temp = inc.top() ; 
           custom.push(temp + val) ; 
           inc.pop() ;
       }
       while(!inc.empty()){
           int temp = inc.top() ; 
           custom.push(temp) ; 
           inc.pop() ;
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

From <https://leetcode.com/problems/design-a-stack-with-increment-operation/submissions/992310561/>
