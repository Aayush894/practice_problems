From <https://leetcode.com/problems/linked-list-random-node/description/> 

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
    vector<int> Linklist ; 
    Solution(ListNode* head) {
        vector<int> linklist ; // create a vector list
        
        while(head){
            linklist.push_back(head->val) ; 
            head = head->next ;
        }
        setter(linklist) ; 
    }
    void setter(vector<int> list){
        this->Linklist = list ;  // setting the list 
    }
    int getRandom() {
        int count = this->Linklist.size() ; 
        int random = rand()%count ; // fetch random value form the size 
        return this->Linklist[random] ; // return random 
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

From <https://leetcode.com/problems/linked-list-random-node/submissions/975692004/> 
