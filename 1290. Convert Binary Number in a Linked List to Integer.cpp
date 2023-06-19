From <https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/> 

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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = reverse(head) ; 
        int count = 0 ;
        int ans = 0;
        while(ptr){
            if(ptr->val == 0)
            {
                count++ ; 
                ptr = ptr->next ;
                continue ;
            }
            ans += pow(2,count) ; 
            count++ ; 
            ptr = ptr->next ; 
        }
        return ans ; 
    }
private: 
    ListNode* reverse(ListNode* head){
        ListNode* curr = head,*next ,*prev = NULL ;
        while(curr){
            next = curr->next ;
            curr->next = prev ; 
            prev = curr ;
            curr = next ;
        }
        return prev ;
    }
};

From <https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/974224069/> 
