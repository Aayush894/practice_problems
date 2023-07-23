From <https://www.codingninjas.com/studio/problems/next-greater-element_670312?leftPanelTab=0> 

#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int> &arr, int n) {
    // Write your code here
    stack<int> st ;
    st.push(-1) ; 
    vector<int> ans ;
    for(int i = arr.size()-1;i >= 0;i--)
    {
        if(st.top() > arr[i]){
            ans.push_back(st.top()) ; 
            st.push(arr[i]) ; 
        }
        else{
            while(st.top()!=-1 && st.top() <= arr[i])
            st.pop() ; 
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
