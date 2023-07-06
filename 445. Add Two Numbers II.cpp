From <https://leetcode.com/problems/add-two-numbers-ii/description/> 

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = reverse(l1),*ptr2 = reverse(l2) ; 
        ListNode *dummy = new ListNode() ; //ans list 
        ListNode *tail = dummy ;
        int carry = 0  ;
        while(ptr1 && ptr2){
            ptr1->val = ptr1->val + ptr2->val + carry ; // addition performed form last
            
            carry = ptr1->val/10  ; // check & set carry 
            ptr1->val = ptr1->val%10 ; //store last digit in ptr1 node 
      
            tail->next = ptr1 ; // tail start pointing ptr1 
            tail = ptr1 ;
            ptr1 =  ptr1->next ; 
            ptr2 = ptr2->next ;
        }
        //  if list 1 is remaining 
        while(ptr1){ 
            ptr1->val = ptr1->val + carry; 
            carry = ptr1->val/10 ; 
            ptr1->val = ptr1->val%10 ; 
            
            tail->next = ptr1 ;
            tail = ptr1 ;
            
            ptr1 = ptr1->next ;
        }
        while(ptr2){ 
            ptr2->val = ptr2->val + carry; 
            carry = ptr2->val/10 ; 
            ptr2->val = ptr2->val%10 ; 
            
            tail->next = ptr2 ;
            tail = ptr2 ;
            
            ptr2 = ptr2->next ;
        }
        if(carry){// if addition generates a extra digit
            ListNode *temp = new ListNode(carry) ; 
            carry = 0 ;
            tail->next = temp ; 
        }
        return reverse(dummy->next) ; // reverse the dummy node and return 
    }
private : 
    ListNode* reverse(ListNode* head) {
        ListNode* curr= head,*prev = NULL,*next ;
        // logic for reverse a link list 
        while(curr){
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        return prev ;
    }
};

From <https://leetcode.com/problems/add-two-numbers-ii/submissions/982311964/>
