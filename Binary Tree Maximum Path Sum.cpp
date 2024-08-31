
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathSum(root,maxi);
        return maxi;
    }
    int pathSum(TreeNode* root, int &maxi) {
    if (root == nullptr) {
        return 0;
    }

    int ls = max(0, pathSum(root->left, maxi)); 
    int rs = max(0, pathSum(root->right, maxi)); 

    
    maxi = max(maxi, root->val + ls + rs);

    
    return root->val + max(ls, rs);
}

};
