From <https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/949563932/> 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans; 
        Preorder(root,ans) ; 
        return ans ; 
    }
    void Preorder(TreeNode* root,vector<int>& ans)
    {
        if(root != NULL)
        {
            ans.push_back(root->val) ; 
            Preorder(root->left,ans) ; 
            Preorder(root->right,ans) ; 
        }
    }
};
