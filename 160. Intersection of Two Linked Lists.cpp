From <https://leetcode.com/problems/intersection-of-two-linked-lists/description/> 

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1 = headA,*ptr2 = headB ; 
        long countA = 0 ,countB = 0 ; 
        //for count no of nodes in list A 
        while(ptr1)
        {
            countA++ ;
            ptr1 = ptr1->next ;
        } 
        //for count no of nodes in list B
        while(ptr2)
        {
            countB++ ;
            ptr2 = ptr2->next ;
        } 
        ptr1 = headA ; 
        ptr2 = headB ; 
        /* start from same distance from the intersecting node to reach the intersecting node simultaneously */ 
        if(countA >= countB)
        {
            int diff = countA - countB ; 
            while(diff--)
            {
                ptr1 = ptr1->next ;
            }
            while(ptr1 || ptr2) 
            {
                if(ptr1 == ptr2) 
                return ptr1;
                ptr1 = ptr1->next ; 
                ptr2 = ptr2->next ; 
            }
            return NULL ;
        }
        else 
        {
            int diff = countB - countA ; 
            while(diff--)
            {
                ptr2 = ptr2->next ;
            }
            // loop for check the intersection point 
            while(ptr1 || ptr2) 
            {
                if(ptr1 == ptr2) 
                return ptr1;
                ptr1 = ptr1->next ; 
                ptr2 = ptr2->next ; 
            }
            return NULL ;
        }
    
    }
};

From <https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/965742414/> 
