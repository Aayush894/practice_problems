From <https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/> 

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
    int pairSum(ListNode* head) {
        ListNode* ptr = head ;
        // store link list into stack list1 
        stack<int> list1 ;
        while(ptr){
            list1.push(ptr->val)  ;
            ptr = ptr->next ;
        }
        // store second half of the stack list1 into list2 
        stack<int> list2 ;
        int n = list1.size() ;
        for(int i = 0 ; i < n/2 ;i++){
            list2.push(list1.top()) ; 
            list1.pop()  ;
        }
        // find max twin sum
        int max_sum = 0;
        for(int i = 0 ;i < n/2 ;i++){
            max_sum = max(max_sum , list1.top() + list2.top()) ;
            list1.pop() ; 
            list2.pop()  ;
        }
        // return max twin sum 
        return max_sum ;
    }
};

From <https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/992103734/>
