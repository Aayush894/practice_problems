From <https://leetcode.com/problems/reverse-linked-list-ii/description/?envType=daily-question&envId=2023-09-07> 

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ptr = head ;
        ListNode *left_ptr,*right_ptr;//left_ptr ->where we have to start reversing ,right_ptr -> where we stop 
        
        if(left == right) 
        return head ;
        int c = 1; //for count
        //fetching left_ptr and right pointer 
        while(ptr)
        {
            if(c == left) 
            left_ptr = ptr ;
            else if(c == right + 1)
            {
                right_ptr = ptr ;
                break ;
            }
            c++ ;
            ptr = ptr->next ;
        }
        vector<int> value ; 
        ptr = left_ptr;
        //store values of the nodes b/w left_ptr and right_ptr in vector<int> 
        while(ptr)
        {
            if(ptr == right_ptr)
            break ;
            
            value.push_back(ptr->val) ;
            ptr = ptr->next ;
        }
        int n = value.size() -1 ;
        ptr = left_ptr ;
        //reverse the value 
        while(ptr)
        {
            if(ptr == right_ptr)
            break ;
            cout<<value[n] ; 
            ptr->val = value[n] ;
            ptr = ptr->next ;
            n-- ;
        }
        return head ;
    } 
};

From <https://leetcode.com/problems/reverse-linked-list-ii/submissions/1042647541/?envType=daily-question&envId=2023-09-07> 
