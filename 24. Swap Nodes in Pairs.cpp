From <https://leetcode.com/problems/swap-nodes-in-pairs/description/> 

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
    ListNode* swapPairs(ListNode* head) {
        return solve(head) ; 
    }
private:
    ListNode* solve(ListNode *head){
        /*apply recursion */
        if(head == NULL || head->next == NULL) //if head is NULL (no node) or only one node then return head 
        return head;
        ListNode* curr = head ,*next = curr->next ; 
        
        ListNode *temp = next->next ;
        next->next = curr ;
        curr->next = solve(temp) ; // recursive call 
        return next ; // next is the new head 
    }
};

From <https://leetcode.com/problems/swap-nodes-in-pairs/submissions/965267871/>
