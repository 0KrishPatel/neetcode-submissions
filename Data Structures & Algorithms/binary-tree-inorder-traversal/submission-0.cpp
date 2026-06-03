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
    vector<int> result;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
    }
    private:
        void inorder(TreeNode* roote){
            // left
            //print
            //right
            //base case
            if(roote == NULL){
                return;
            }
            inorder(roote->left);
            result.push_back(roote->val);
            inorder(roote->right);
        }
};