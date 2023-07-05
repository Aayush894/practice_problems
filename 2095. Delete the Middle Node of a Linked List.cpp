From <https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/> 

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
    ListNode* deleteMiddle(ListNode* head) {
        // slow fast approach 
        ListNode* slow = head ,* fast = head,* prev = NULL ;
        if(head->next == NULL ) // if only one node in the ll
        return NULL ; 
        while(fast && fast->next)
        {
            prev = slow ; // prev point to node previous of slow 
            slow = slow->next ;
            fast = fast->next->next ;
        }
        
        prev->next = slow->next ;
        return head ;
    }
};

From <https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/982319057/>
