From <https://leetcode.com/problems/next-greater-node-in-linked-list/description/> 

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans  ;
        ListNode* ptr = head ;
        ListNode* ptr1  ;
        while(ptr->next){
            ptr1 = ptr->next ;
            while(ptr1 && ptr1->val <= ptr->val )
            {
                ptr1 = ptr1->next ;
            }
            if(ptr1 == NULL)
            ans.push_back(0) ; 
            else 
            ans.push_back(ptr1->val) ;
            ptr = ptr->next ;
        }
        ans.push_back(0) ; 
        return ans;
    }
};

From <https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/975745545/> 
