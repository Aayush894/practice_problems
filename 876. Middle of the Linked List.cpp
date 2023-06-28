From <https://leetcode.com/problems/middle-of-the-linked-list/description/> 
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
    ListNode* middleNode(ListNode* head) {
        /*tortoise hair approach */ 
        ListNode* slow = head , *fast = head ;
        while(fast && fast->next) 
        {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow;
    }
};

From <https://leetcode.com/problems/middle-of-the-linked-list/submissions/970488421/> 
