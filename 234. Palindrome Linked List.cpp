From <https://leetcode.com/problems/palindrome-linked-list/description/> 
  
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
    bool isPalindrome(ListNode* head) {
        vector<int> num ;
        ListNode* ptr = head ;
        while(ptr){
            num.push_back(ptr->val) ; 
            ptr = ptr->next ;
        }
        ptr = head ;
        while(ptr){
            if(num[num.size()-1] == ptr->val)
            {
                num.pop_back() ; 
                ptr = ptr->next ;
            }
            else 
                return false ;
        }
        return true ;
    }
// public:
//     ListNode* reverse(ListNode* head) {
//         ListNode* curr= head,*prev = NULL,*next ;
//         // logic for reverse a link list 
//         while(curr){
//             next = curr->next ;
//             curr->next = prev ;
//             prev = curr ;
//             curr = next ;
//         }
//         return prev ;
//    }
};

From <https://leetcode.com/problems/palindrome-linked-list/submissions/996421298/>
