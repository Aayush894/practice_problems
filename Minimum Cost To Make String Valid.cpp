From <https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0> 

#include <bits/stdc++.h> 
int findMinimumCost(string s) {
  // Write your code here
  if(s.length() % 2)
  return -1 ;
  
  int a = 0, b = 0 ;
  stack<char> stack ; 
  for(int i = 0 ;i < s.size();i++){
    char ch = s[i] ;
    if(ch == '{')
    {
      stack.push(ch) ; 
    }
    else{
      if(!stack.empty() && stack.top() == '{'){
        stack.pop() ; 
      }
      else{
        stack.push(ch) ; 
      }
    }
  }
  while(!stack.empty()){
    if(stack.top() == '{')
    a++ ;
    else
    b++ ;
    stack.pop() ; 
  }
  return ((a+1)/2) + ((b+1)/2) ;
}
