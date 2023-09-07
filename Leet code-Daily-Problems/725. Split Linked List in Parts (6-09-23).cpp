From <https://leetcode.com/problems/split-linked-list-in-parts/> 

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* ptr = head ; 
        vector<ListNode*> ans ; 
       
        int count = 0 ; 
        // find the count of nodes of link list 
        while(ptr)
        {
            ptr = ptr->next ;
            count++ ; 
        }
        // do partition
        int part[k] ; 
        int div = count/k;
        int rem = count%k ;
        for(int i = 0 ; i < k;i++) // size of each link list in the ans vector
        {
            if(rem == 0)
            {
                part[i] = div ; 
            }
            else 
            {
                part[i] = div + 1 ;
                rem-- ; 
            }
        }
        ptr = head ;
        for(int i = 0 ;i < k ;i++)
        {
            ans.push_back(ptr) ; 
            while(--part[i] && ptr) //divide link list 
            {
                ptr = ptr->next ;
            }
            if(ptr) //for end case
            {
                ListNode* temp = ptr->next ;
                ptr->next = NULL ;
                ptr = temp ;
            }
        }
        return ans ;
    }
};

From <https://leetcode.com/problems/split-linked-list-in-parts/submissions/1041748997/?envType=daily-question&envId=2023-09-06> 
