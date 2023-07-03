From <https://leetcode.com/problems/next-greater-node-in-linked-list/description/> 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        //second logic by using stack 
        head = reverselist(head) ; // reverse the list 
        vector<int> ans  ; 
        stack<int> st; // maintain stack 
        ListNode* ptr = head ;
        while(ptr){
            
            while(st.empty() != true && ptr->val >= st.top()) // if top of the stack is small or equal to the ptr->val then pop the top of stack 
            st.pop() ; 
            if(st.empty() == true) // if stack is empty
            {
                st.push(ptr->val) ; //push value in stack 
                ans.push_back(0) ; //insert 0 in ans vector
            }
            if(ptr->val < st.top()) // if st top is greater than ptr value
            {
                ans.push_back(st.top()) ;//push st.top in ans 
                st.push(ptr->val) ; //push value in stack 
            }
            ptr = ptr->next ;
        }
        reverse(ans.begin(),ans.end()) ; // reverse ans to maintain the sequence 
        return ans ;
    }
private: /* logic for reverse the linklist */
    ListNode* reverselist(ListNode* head){
        ListNode* curr = head ,*next,*prev = NULL ;
        while(curr){
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ;
        }
        return prev ;
    }
};

From <https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/975758627/> 
