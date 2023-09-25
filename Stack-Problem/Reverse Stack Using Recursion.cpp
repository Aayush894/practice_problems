From <https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?leftPanelTab=0> 


void Insert_At_Bottom(stack<int>& st,int key){
    // base case where the key is inserted at last
    if (st.empty()) {
      st.push(key);
      return;
    }
    // store the top element of stack
    int temp = st.top();
    st.pop();
    // recursive call
    Insert_At_Bottom(st, key);
    // add the temp at top of stack
    st.push(temp);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return ;
    }
    int temp = stack.top() ; 
    stack.pop() ; 
    reverseStack(stack) ; 
    Insert_At_Bottom(stack,temp) ; 
    return ; 
}

Sort a Stack

From <https://www.codingninjas.com/studio/problems/sort-a-stack_985275?leftPanelTab=0> 


#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack,int key){
    if(stack.empty() || stack.top() <= key){
        stack.push(key) ; 
        return ;
    }
    int temp = stack.top() ; 
    stack.pop() ; 
    sortedInsert(stack,key) ; 
    stack.push(temp) ; 
    return ; 
}
void sortStack(stack<int> &stack)
{
    if(stack.empty()){
        return ;
    }
    int temp = stack.top() ; 
    stack.pop();
    sortStack(stack) ;
    sortedInsert(stack,temp) ; 
    return ;
    // Write your code here
}

Redundant Brackets

From <https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0> 


#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> stack ;
    for(int i = 0 ;i < s.size() ;i++){
        char ch = s[i] ;
        if (ch == ')') {
          if (stack.top() == '(') {
            return true;
          }
          while (stack.top() != '(')
            stack.pop() ; 
            stack.pop() ; // remove '(' from stack
        } 
        else {
            if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(')
            stack.push(ch);
        }
    }
    return false ;
    // Write your code here.
