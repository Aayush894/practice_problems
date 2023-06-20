From <https://leetcode.com/problems/remove-linked-list-elements/description/> 

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr = head ;
        ListNode* prev = NULL ;
        while(ptr){
            if(prev == NULL && ptr->val == val) //if target node is the first node 
            {
                head = ptr->next ; // update head 
                ptr = ptr->next ; //update ptr 
            }
            else if(ptr->val == val) //if target node is not head 
            {
                prev->next = ptr->next ; //delete target node 
                ptr = ptr->next ; //update ptr
            }
            else //if curr node is not target node
            {
                prev = ptr ;  
                ptr = ptr->next ;
            }
        }
        return head ;
    }
};

From <https://leetcode.com/problems/remove-linked-list-elements/submissions/974213345/> 
