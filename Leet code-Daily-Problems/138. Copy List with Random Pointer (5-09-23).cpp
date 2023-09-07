From <https://leetcode.com/problems/copy-list-with-random-pointer/description/?envType=daily-question&envId=2023-09-05> 
  
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    /* using mapping approach to connect the original and the dummy list 
    map<original list ptr,dummy list pointer> */
public:
    Node* copyRandomList(Node* head) {
        /* create a dummy list */
        Node *dummy = new Node(-1) ; 
        Node *tail = dummy ; 

        Node *ptr = head ;
        /* using unordered map for linking of orriginl and dummy list */
        unordered_map<Node*,Node*> mp ;
        /* create dummy list by only next pointer*/
        while(ptr)
        {
            Node *temp = new Node(ptr->val) ; 
            tail->next = temp ;
            tail = temp ;
            mp[ptr] = temp ; 
            ptr = ptr->next ; 
        }
        ptr = head ;
        Node* ptr_dummy = dummy->next ;
        /*linking of random pointer*/
        while(ptr && ptr_dummy)
        {
            /* mp[ptr->random] gives the ptr->random in the dummy list */
            ptr_dummy->random = mp[ptr->random] ; 
            
            ptr_dummy = ptr_dummy->next ;
            ptr = ptr->next ;
        }
        return dummy->next ;
    }
};

From <https://leetcode.com/problems/copy-list-with-random-pointer/submissions/1040816660/?envType=daily-question&envId=2023-09-05> 
