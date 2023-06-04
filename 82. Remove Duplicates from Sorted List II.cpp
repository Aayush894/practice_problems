From <https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/submissions/958678371/> 

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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> st ;//use an unordered set  
        ListNode* ptr = head ;
       
        if(head == NULL)
        return head ;
        //traverse through linked list and find all the element that has duplicates  
        while(ptr->next)
        {
            if(ptr->val == ptr->next->val)
            st.insert(ptr->val) ; 
            ptr= ptr->next ;
        }
       
        ptr = head ; 
        ListNode* prev = NULL ;
        // traverse through linked list and delete all the nodes which has duplicate value(element of st)
        while(ptr)
        {
            if(st.find(ptr->val) != st.end()) //if node->val is found in st 
            {
                if(prev == NULL) //if the node is the first node then update the head 
                {
                    ptr = ptr->next ;
                    head = head->next ;
                }
                else // else delete a node 
                {
                    prev->next = ptr->next ;
                    ptr = ptr->next ;
                }
            }
            else //if node->val is not present in the set st then increase the ptr and prev 
            {
                prev = ptr ; 
                ptr = ptr->next ;
            }
        }
        
        return head ; 
    }
};

