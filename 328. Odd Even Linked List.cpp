From <https://leetcode.com/problems/odd-even-linked-list/description/> 

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
    ListNode* oddEvenList(ListNode* head) {
        //create two dummy nodes to create list of oddIndex and evenIndex ;
        ListNode* dummy_oddIndex = new ListNode() ; 
        ListNode* tail1 = dummy_oddIndex ; 
        ListNode* dummy_evenIndex = new ListNode() ; 
        ListNode* tail2 = dummy_evenIndex ;
        ListNode* ptr = head ;
        int count = 0 ; 
        while(ptr) 
        {
            ListNode * nex = ptr->next ;
            if(count%2) //node index is odd
            {
                tail1->next = ptr ;
                ptr->next = NULL ;
                tail1 = ptr ;
                ptr = nex ;
            }
            else //node index is even 
            {
                tail2->next = ptr ;
                ptr->next  = NULL ; 
                tail2 = ptr ;
                ptr = nex ;
            }
            count++ ;
        }
            tail2->next = dummy_oddIndex->next ; // joining even and oddIndex dummy nodes 
            return dummy_evenIndex->next ;
        
    }
};

From <https://leetcode.com/problems/odd-even-linked-list/submissions/964223422/> 
