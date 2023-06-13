From <https://leetcode.com/problems/sort-list/description/> 

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
    ListNode* sortList(ListNode* head) {
        //apply merge sort in link list 
        return mergesort(head) ;
    }
public: 
    /* code to find the mid of the linked list */
    ListNode* findmid(ListNode *head){
        // tortoise and hair approach 
        ListNode *slow = head ,*fast = head->next ; 
        while(fast && fast->next) {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow ;
    }
    /* code to merge two link list in sorted order */
    ListNode* merge(ListNode *left , ListNode *right) {
        // base case
        if(left == NULL) return right ; 
        if(right == NULL) return left ;
        // dummy node to join the link list
        ListNode* dummy = new ListNode() ; 
        ListNode* tail = dummy ; 
        // loop for sorting the left and right list
        while(left != NULL && right != NULL){
            if(left->val < right->val){
                tail->next = left ;
                tail = left ; 
                left = left->next ;
            }
            else {
                tail->next = right ; 
                tail = right ;
                right = right->next ;
            }
        }
        
        if(left){
            tail->next = left  ;
        }
        if(right){
            tail->next = right ;
        }
        return dummy->next ;
    }
    ListNode * mergesort(ListNode *head) {
        //base case 
        if(head == NULL || head->next == NULL) 
        return head ;
        // find mid of link list 
        ListNode *mid = findmid(head) ; 
        ListNode *left = head,*right = mid->next ; 
        mid->next = NULL ; // making next of mid NULL 
        
        // recursive calls for left and right list 
        left = mergesort(left); 
        right = mergesort(right) ;
        // result in merge list 
        return merge(left,right) ; 
    }
};

From <https://leetcode.com/problems/sort-list/submissions/969752533/>
