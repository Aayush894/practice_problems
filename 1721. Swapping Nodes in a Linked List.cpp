From <https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/> 

(play with pointer) 
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
    ListNode* swapNodes(ListNode* head, int k) {
        int node_count = 0 ;
        ListNode* ptr = head ;
        /* count the nodes in the List */
        while(ptr)
        {
            node_count++ ; 
            ptr = ptr->next ;
        }
        /* fetch the pointers from kth from begin and kth from end */
        int index_kBeg = min(k,node_count- k + 1) ;
        int index_kEnd = max(k,node_count- k + 1) ;
        
        if(index_kBeg == index_kEnd) //if index coincide then return head ;
        return head ;
        // pointers stores the prev,next and node address 
        ListNode *prevK = NULL , *ptr_K = NULL, *nextK = NULL ; 
        ListNode *prevEK = NULL , *ptr_EK = NULL, *nextEK = NULL ;
        ListNode* prev = NULL ,*nex = NULL ;
        //initialize ptr with head to traverse through list 
        ptr = head ;
        //node_count is initialised to 1 pointer the index of node we are standing .
        node_count = 1 ;
        //traverse through list 
        while(ptr)
        {
            nex = ptr->next ;
            if(node_count==index_kBeg)
            {
                prevK = prev ;
                ptr_K = ptr ;
                nextK = nex ;
            }
            if(node_count==index_kEnd)
            {
                prevEK = prev ;
                ptr_EK = ptr ;
                nextEK = nex ;
                break ; //to avoid non required traversal 
            }
            node_count++ ;
            prev = ptr ;
            ptr = ptr->next ;
        }
        /*condition for swapping of these two nodes kth from beg and kth from end*/
        
        if(prevK) //if k == 1 then prevK is NULL
        prevK->next = ptr_EK ;
        else  
        head = ptr_EK ; //new head is ptr_Ek 
        ptr_EK->next = nextK ;
        prevEK->next = ptr_K ; 
        ptr_K->next = nextEK ;
        
        if(index_kBeg+1 == index_kEnd) //if the nodes pointer coincide or having two or more common pointers (like in second test case)
        ptr_EK->next = ptr_K ; 
        return head ;
    }
};

From <https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/964261651/> 
