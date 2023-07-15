From <https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0> 
  
#include <bits/stdc++.h> 
using namespace std ;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> newstack ;
    while(myStack.empty()!=true)
    {
        newstack.push(myStack.top()) ; 
        myStack.pop() ; 
    }
    newstack.push(x) ; 
    while(newstack.empty()!=true)
    {
        myStack.push(newstack.top()) ; 
        newstack.pop() ; 
    }
    return myStack ;
    // Write your code here.
}
