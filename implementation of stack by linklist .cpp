#include <iostream>
using namespace std ;
class linklist{
    public: 
    int data ; 
    linklist* next ; 
    linklist(int val){
        this->data = val; 
        this->next = NULL;
    }
};
class Stack{
    public : 
    linklist* stack ; 
    linklist* tail ;
    Stack(){
        this->stack = new linklist(0)  ; 
        this->tail = stack ;
    }
    
    void push(int val){
         linklist* temp = new linklist(val) ; 
         tail->next = temp ; 
         tail = temp ;
    }
    int pop(){
        linklist *ptr = stack ;
        while(ptr->next->next){
            ptr = ptr->next ;
        }
        ptr->next = NULL ;
        tail = ptr ;
    }
    int peek(){
        cout<<tail->data<<endl ;
    }
};

int main() {
    Stack* my = new Stack();
    my->push(2) ; 
    my->push(3) ; 
    my->peek() ; 
    my->pop() ; 
    my->peek() ;
    my->pop() ;
    my->push(1) ; 
    my->push(2) ; 
    my->push(3) ;
    my->peek() ; 
    my->pop() ;
    my->peek() ; 
    
    
    cout << "Hello world!";

    return 0;
}
