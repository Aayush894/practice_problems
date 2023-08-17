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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *new_head = NULL ,*ptr = head ,*prev= NULL ;
        int count = 0 ;
        if(head == NULL)// if no element then return 
        return head ;
        while(ptr) // count the nodes of th ll 
        {
            ptr = ptr->next ;
            count++ ;
        }
        k = k % count ; // reduce k to min no of rotates 
        // if no rotate then return haad 
        if(k == 0) 
        return head ;
        k = count - k ; 
        ptr = head ;
        //loop for fetching new_head 
        while(k--)
        {
            prev = ptr ; 
            ptr = ptr->next ;
        }
        prev->next = NULL ; //make the next of node prev to new_head to NULL
        new_head = ptr ;
        ptr = new_head ;
        //for for reaching the end of the ll
        while(ptr->next) 
        ptr = ptr->next ;
        ptr->next = head ;//last node points to the head 
        return new_head ;
    }
};

From <https://leetcode.com/problems/rotate-list/submissions/958749398/?envType=study-plan-v2&id=top-interview-150>
