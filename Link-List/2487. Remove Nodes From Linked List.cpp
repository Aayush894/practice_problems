From <https://leetcode.com/problems/remove-nodes-from-linked-list/description/> 
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
    ListNode* removeNodes(ListNode* head) {
        // reverse list 
        ListNode *ptr = reverse(head) ; 
        // optimised code by using int max_no instead of stack 
        // stack<int> st ; // stack memory 
        
        // ans dummy list 
        ListNode *dummy = new ListNode() ; 
        ListNode *tail = dummy ; 
        // traverse reverse list 
        int max_no = 0;
        while(ptr){
            if(max_no == 0){ // if max_no is 0 then add ptr into dummy list and max_no is ptr->val
                tail->next = ptr ; 
                tail = ptr ;
                max_no = ptr->val ;
                ptr = ptr->next ;
            }
            else if(max_no <= ptr->val){ // if max_no is less than the ptr->val then add into dummy list and max-no =  ptr->val 
                tail->next = ptr ; 
                tail = ptr ; 
                max_no = ptr->val ;
                ptr = ptr->next ;
            }
            else{
                ptr = ptr->next ;
            }
            
        }
        // last node next pointer is NULL for remove further link 
        tail->next = NULL ;
        return reverse(dummy->next) ; // reverse agian the dummy list and return head of list 
    }
private: 
/* code for reverse the link list */
    ListNode* reverse(ListNode *head){
        ListNode *curr = head,*next = NULL,*prev = NULL ;
        while(curr){
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        return prev ;
    }
};

From <https://leetcode.com/problems/remove-nodes-from-linked-list/submissions/994261825/> 
