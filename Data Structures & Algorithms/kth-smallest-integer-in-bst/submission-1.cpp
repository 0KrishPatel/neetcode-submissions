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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr; //O(n) space o(n)
        dfs(root,arr);
        return arr[k-1];
        
        //left
        //print
        // right

    }
    void dfs(TreeNode* node,vector<int>& arr){
        if(!node){
            return;
        }
        dfs(node->left,arr);
        arr.push_back(node->val);
        dfs(node->right,arr);
    }
};
