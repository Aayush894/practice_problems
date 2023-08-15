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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode() ;  //create a dummy node
        ListNode *tail = dummy;  
        ListNode *ptr1 = list1 , *ptr2 = list2 ; 
        while(ptr1 && ptr2)
        {
            if(ptr1->val < ptr2->val) 
            {
                tail->next = ptr1 ;
                tail = ptr1 ;
                ptr1 = ptr1->next ; 
            }
            else 
            {
                tail->next = ptr2 ;
                tail = ptr2 ; 
                ptr2 = ptr2->next ;
            }
        }
        if(ptr2 == NULL) 
        {
            tail->next = ptr1 ; 
            tail = ptr1 ;
            ptr1 = NULL ;
        }
        else if(ptr1 == NULL) 
        {
            tail->next = ptr2 ;
            tail = ptr2 ;
            ptr2 = NULL ;
        }
        return dummy->next ; 
    }
};

From <https://leetcode.com/problems/merge-two-sorted-lists/submissions/958732372/?envType=study-plan-v2&id=top-interview-150> 
