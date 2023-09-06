From <https://leetcode.com/problems/linked-list-cycle/description/?envType=daily-question&envId=2023-09-04> 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head,*fast = head ; 
        while(fast && fast->next)
        {
            slow = slow->next ; 
            fast = fast->next->next ; 
            if(slow == fast)
            return true ;
        }
        return false ; 
    }
};

From <https://leetcode.com/problems/linked-list-cycle/submissions/1039934822/?envType=daily-question&envId=2023-09-04> 
