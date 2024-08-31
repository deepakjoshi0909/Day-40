class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        TreeNode* current = root;
        while (current != nullptr) {
            if (current->left != nullptr) {
                TreeNode* rightmost = current->left;
                while (rightmost->right != nullptr) {
                    rightmost = rightmost->right;
                }

                rightmost->right = current->right;

                current->right = current->left;
                current->left = nullptr;
            }
            
            current = current->right;
        }
    }
};
