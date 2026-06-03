class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) {
            return nullptr;
        }
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            
            if (root->left == nullptr) { // 0 or 1 chid
                TreeNode* temp = root->right;
                delete root; 
                return temp;
            } 
            else if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            
            TreeNode* curr = root->right; // 2chid
            while (curr != nullptr && curr->left != nullptr) {
                curr = curr->left;
            }
            root->val = curr->val;
            root->right = deleteNode(root->right, curr->val);
        }

        return root;
    }
};