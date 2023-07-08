From <https://leetcode.com/problems/reorder-list/description/> 
											
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
    void reorderList(ListNode* head) {
        /* using recursion */
        reorder(head) ; 
    }
private:
    ListNode* reorder(ListNode* head){
        ListNode* ptr = head ;
        if(ptr ==  NULL || ptr->next == NULL) // base case
        return ptr ;
        while(ptr->next->next) //fetching of second last node
        ptr = ptr->next ; 
        ListNode* temp = ptr->next ; //last node
        ptr->next = NULL ; // make 2nd last node -> last node..
        ListNode* temp2 = head->next; // 2nd node for recursive call
        head->next = temp ;
        temp->next = reorder(temp2) ; //recursive call
        return head ;
    }
};

From <https://leetcode.com/problems/reorder-list/submissions/970483565/> 
