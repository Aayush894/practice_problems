From <https://leetcode.com/problems/min-stack/description/> 

class MinStack {
public:
    stack<long> st ;//maintain a stack 
    long mini = INT_MAX ;
    MinStack() {
       
        
    }
    
    void push(long val) {
        // if empty then push directly
        if(st.empty()){
            st.push(val) ; 
            mini = val ;
            return ;
        }
        // if new value is less than minimum value then mini is changed
        if(val < mini){
            long value = (2 * val) - mini ; // encode the value for check 
            st.push(value); // push that value 
            mini = val ; // new mini is val
        }
        else{
            st.push(val) ; // directly push the val
        }
             
    }
    void pop() {
        // if stack is empty then return 
        if(st.empty()){
            return ;
        }
        // if top of st is less than mini then it is a encoded code ;
        if(st.top() < mini){
            long value = (2 * mini) - st.top();// decode previous mini value 
            mini = value ;// new mini is previous mini value 
            st.pop() ;
        }
        else{
            st.pop() ;// directly pop 
        }
    }
    
    int top() {
        if(st.empty())
        return -1 ;
        if(st.top() < mini){
            return mini ;
        }
        return st.top(); // top of stack .
    }
    
    int getMin() {
        return mini; // mini take care of until mini element 
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

From <https://leetcode.com/problems/min-stack/submissions/1007938276/> 
