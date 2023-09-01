From <https://leetcode.com/problems/design-browser-history/description/> 

class BrowserHistory {
public:
    stack<string> current  ;
    stack<string> forwrd ;
    BrowserHistory(string homepage) {
        current.push(homepage) ; 
    }
    
    void visit(string url) {
        current.push(url) ;
        // clear up all forward histor 
        while(!forwrd.empty()) 
        forwrd.pop() ; 
    }
    
    string back(int steps) {
        while(current.size() > 1 && steps--)
        {
            forwrd.push(current.top()) ; 
            current.pop() ;
        }
        return current.top() ;
    }
    string forward(int steps) {
        while(!forwrd.empty() && steps--){
            current.push(forwrd.top()) ; 
            forwrd.pop() ; 
        }
        return current.top() ; 
    }
};
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

From <https://leetcode.com/problems/design-browser-history/submissions/992127764/> 
