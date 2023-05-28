From <https://leetcode.com/problems/partition-list/submissions/959080918/?envType=study-plan-v2&id=top-interview-150> 

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
    ListNode* partition(ListNode* head, int x) {
        //initialise two dummy lists one for smaller and other for larger 
        ListNode *dummy1 = new ListNode() ;
        ListNode *dummy2 = new ListNode() ; 
        ListNode *tail1 = dummy1 ;
        ListNode *tail2 = dummy2 ;
        ListNode *ptr = head ;
        while(ptr)
        {
            if(ptr->val < x) //add in dummy1 
            {
                tail1->next = ptr ;
                tail1 = tail1->next ;
                ptr = ptr->next ;
                tail1->next = NULL ;
            }
            else //add in dummy2 
            {
                tail2->next = ptr ;
                tail2 = tail2->next ;
                ptr = ptr->next ;
                tail2->next = NULL;
            }
            
        }
        tail1->next = dummy2->next ;//join both dummy lists 
        return dummy1->next ; 
    }
};
